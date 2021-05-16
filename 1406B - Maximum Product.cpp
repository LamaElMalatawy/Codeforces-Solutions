#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cin.tie(NULL)
#define ll long long

using namespace std;

int main() {

    IO;
    int t, n, a;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<ll> vec(n);

        for (int i = 0; i < n; ++i) {
            cin>>vec[i];
        }

        sort(vec.begin(), vec.end());

            ll int a,b,c;
            a=vec[0]*vec[1]*vec[2]*vec[3]*vec[n-1];
            b=vec[0]*vec[1]*vec[n-1]*vec[n-2]*vec[n-3];
            c=vec[n-1]*vec[n-2]*vec[n-3]*vec[n-4]*vec[n-5];
            ll z=max(a,b);
            ll ans=max(z,c);
            cout<<ans<<'\n';
        
    }
    return 0;
}
