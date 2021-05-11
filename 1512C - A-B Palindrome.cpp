#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)

using namespace std;

int main() {

    IO;
    int t, a, b;
    string s;
    cin >> t;
    while (t--) {
        cin >> a >> b >> s;
        bool flag = true;
        for (int i = 0; i < (s.size() / 2); ++i) {
            if (s[i] == '?' && s[s.size() - (i + 1)] != '?') {
                s[i] = s[s.size() - (i + 1)];

            } else if (s[i] != '?' && s[s.size() - (i + 1)] == '?') {
                s[s.size() - (i + 1)] = s[i];
            } else if (s[i] != s[s.size() - (i + 1)]) {
                cout << "-1" << '\n';
                flag = false;
                break;
            }
        }
        if (flag) {
            int cnt = 0;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '0')
                    --a;
                else if (s[i] == '1')
                    --b;
            }
            if (a < 0 || b < 0) {
                cout << "-1" << '\n';
                continue;
            }
            for (int i = 0; i < (s.size() / 2); ++i) {
                if (s[i] == '?' && s[s.size() - (i + 1)] == '?') {
                    if (a > 1) {
                        s[i] = '0';
                        s[s.size() - (i + 1)] = '0';
                        a -= 2;
                    } else if (b > 1) {
                        s[i] = '1';
                        s[s.size() - (i + 1)] = '1';
                        b -= 2;
                    }
                }
            }
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '?')
                    cnt++;
            }
            if ((a == cnt && b == 0) || (b == cnt && a == 0)) {
                for (int i = 0; i < s.size(); i++) {
                    if (cnt == 0)
                        break;
                    if (s[i] == '?') {
                        if (a > 0) {
                            s[i] = '0';
                            a--;
                            --cnt;
                        } else {
                            if (b > 0) {
                                s[i] = '1';
                                b--;
                                --cnt;
                            }
                        }
                    }
                }
            }
            if (cnt > 0 || a > 0 || b > 0)
                cout << "-1\n";
            else
                cout << s << '\n';
        }
    }
    return 0;
}
