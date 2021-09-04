#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N],b[N]={0};


using namespace std;

int main() {

    IO;
    int n,mx=-1;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cin>>a[i];
        mx=max(a[i],mx);
    }
    int d=mx;
    a[0]=d;
    ll ans=0;
    for (int i = 0; i < n; ++i) {
        ans+=a[i]+a[i+1];
        if (ans<0)
        {
            d+=abs(a[i]-a[i+1]);
            a[i]+=abs(a[i]-a[i+1]);
            ans+=abs(a[i]-a[i+1]);
        }
    }

   cout<<d;
    return 0;
}
