#include <bits/stdc++.h>
using namespace std;
long long const int N=2*1e5;
#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)


ll a[N]={0},b[N]={0};

using namespace std;

int main() {


   ll n;
   cin>>n;
   map<ll,ll>mp;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        ++mp[a[i]];
    }
    sort(a,a+n);
    ll diff = a[n-1]-a[0];
    ll ans;
    if(!diff)
        ans = n * (n - 1) /(ll)2; 
    else
        ans = mp[a[0]] * mp[a[n - 1]];
    cout<<diff<<" "<<ans;

    return 0;
}
