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

    int n;
    cin>>n;
    if(n<2)
    {
        cout<<1;
        return 0;
    }
    ll cnt=2,mx=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        if(i<2)
            continue;
        if(a[i]==(a[i-1]+a[i-2]))
            cnt++;
        else
        {
            mx=max(cnt,mx);
            cnt=2;
        }
    }
    mx=max(mx,cnt);
    cout<<mx;


    return 0;
}
