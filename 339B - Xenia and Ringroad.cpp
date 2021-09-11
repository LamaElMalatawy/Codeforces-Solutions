#include <bits/stdc++.h>
using namespace std;
long long const int N=1e5;
#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)


ll a[N]={0},b[N]={0};

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    ll ans=0;
    for (int i = 0; i < m; ++i) {
        cin>>a[i];
    }
    ans=a[0]-1;
    for (int i = 1; i < m; ++i) {
        if(a[i]>a[i-1])
            ans+=(a[i]-a[i-1]);
        else if(a[i]<a[i-1])
            ans+=n-a[i-1]+a[i];
    }
    cout<<ans;

    return 0;
}
