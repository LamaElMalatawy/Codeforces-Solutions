#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, sum = 0;
    cin >> a;
    for (int i = a; i <= 1004; i++) {
        string s = to_string(i);
        for (int j = 0; j < s.size(); j++) {
            sum += (int) (s[j]);

        }

        if (sum % 4 == 0) {
            cout << s;
            break;
        }
        sum=0;
    }
    return 0;
}
