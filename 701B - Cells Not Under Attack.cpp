#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    ll int n,m,x,y;
    cin>>n>>m;

    ll cntc=0,cntr=0;
    ll int ans =n*n;
    for (int i = 0; i < m; ++i) {

        cin>>x>>y;
        if(a[x]==0) {
            a[x] = 1;
            cntr++;
        }
        if(b[y]==0)
        {
            b[y]=1;
            cntc++;
        }
        cout<<ans-(n*(cntr+cntc))+(cntc*cntr)<<" ";
    }

    return 0;
}
