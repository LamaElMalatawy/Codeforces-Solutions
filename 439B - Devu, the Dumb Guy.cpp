#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n,x;
    cin>>n>>x;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    ll int ans=0;
    for (int i = 0; i < n; ++i) {
        ans+=(x*a[i]);
        --x;
        if(x<=1)
            x=1;
    }
    cout<<ans;
    return 0;
}
