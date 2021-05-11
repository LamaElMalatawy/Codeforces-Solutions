#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;

   int t, n;
    cin >> t;
    ll a, b;
    while (t--) {
        cin >> n;
        vector<ll> c(n), o(n);
        ll minO = 1e18, minC = 1e18;
        for (int i = 0; i < n; i++) {
            cin >> c[i];
            minC = min(minC, c[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> o[i];
            minO = min(minO, o[i]);
        }


        ll ans=0;
        for (int i = 0; i < n; ++i) {
            ans+=max((c[i]-minC),(o[i]-minO));
        }
        cout<<ans<<'\n';

        }



    return 0;
}