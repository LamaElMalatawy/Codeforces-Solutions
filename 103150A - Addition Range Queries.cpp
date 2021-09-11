#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)

const ll N=1e6+1;

ll a[N]={0};
//b[N]={0};

using namespace std;

vector<ll>b(N,0);
int main() {

    int t,n;
    ll k,x;
    cin>>t;
    while (t--){
        cin>>n>>k;
        ll mn=1e9+5,mx=0;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        cout<<mx-mn<<endl;
    }

    return 0;
}
