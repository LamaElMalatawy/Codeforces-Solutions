#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;

int main() {
    IO;
    int t;
    int n;
    cin >> t;
    ll a, alice = 0,bob=0;
    while (t--) {
        cin >> n;
        vector<ll> vec(n);
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];

        }
        sort(vec.rbegin(), vec.rend());
        for (int i = 0; i < n; ++i) {
            if (i & 1) {
                if (vec[i] % 2 == 1)
                    bob += vec[i];
            } else {
                if (vec[i] % 2 == 0)
                    alice += vec[i];
            }

        }
        if (alice > bob)cout << "Alice\n";
        else if (alice < bob)cout << "Bob\n";
        else cout << "Tie\n";
        alice = 0,bob=0;
    }
    return 0;
}
