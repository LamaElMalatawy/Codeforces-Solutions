#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N],b[N]={0};


using namespace std;

int main() {

    IO;
    int n,k;
    cin>>n>>k;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int ans=0;
    for (int i = 1; i < n; ++i) {
        if(k-a[i]-a[i-1]<0)
            continue;
       ans+=(k-a[i]-a[i-1]);
       a[i]+=(k-a[i]-a[i-1]);

    }
    cout<<ans<<endl;
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }
    return 0;
}
