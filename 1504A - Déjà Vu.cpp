#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
using namespace std;

void solve() {
    string s;
    cin >> s;
    int idx = -1;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != 'a') {
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        cout << "NO\n";
        return;
    }
    idx = s.size() - idx - 1;
    cout << "YES\n";
    for (int i = 0; i < s.size(); ++i) {
        cout << s[i];
        if (idx == i)cout << 'a';
    }
    cout << '\n';
}


int main() {
    IO;

    int t;
    cin >> t;
    while (t--)solve();


    return 0;
}