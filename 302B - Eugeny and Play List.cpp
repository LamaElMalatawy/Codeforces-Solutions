#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n,m;
    cin>>n>>m;
    ll int c,t;
    for (int i = 0; i < n; ++i) {
        cin>>c>>t;
        if(i==0)
            a[i]=c*t;
        else
        {
            a[i]+=a[i-1]+(c*t);
        }
    }
    ll x;
    for (int i = 0; i < m; ++i) {
        cin>>x;
        auto it = lower_bound(a,a+n,x);
        cout<<(it-a)+1<<endl;
    }
    return 0;
}
