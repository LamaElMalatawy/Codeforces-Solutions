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

    ll l,n;
    cin>>n>>l;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    double d,mx=0.0;
    for (int i = 0; i < n; ++i) {
        if(i==0)
        {
            d=(a[i]-0);
            mx=max(d,mx);
        }
        if(i==(n-1)) {
            d = (l - a[i]);
            mx=max(d,mx);
        }
        if(i!=(n-1)) {
            d = (a[i + 1] - a[i]) / 2.0;
            mx = max(d, mx);
        }
    }
    cout<<fixed<<setprecision(10)<<mx;

    return 0;
}
