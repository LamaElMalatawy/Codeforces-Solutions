#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N];


using namespace std;

int main() {

    IO;

    int d,n,m;
    cin>>d>>n;
    ll ans=0;
    for (int i = 0; i < n; ++i) {
        cin>>m;
        ans+=(d-m);
    }
    ans-=(d-m);

    cout<<ans;

    return 0;
}
