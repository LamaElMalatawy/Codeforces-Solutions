#include <bits/stdc++.h>
 
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
 
const int N=1e6+5;
 
ll a[N],b[N]={0};
 
 
using namespace std;
 
int main() {
 
    IO;
 
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    ll ans=a[0]+1;
    for (int i = 1; i < n; ++i) {
        ans+=abs(a[i]-a[i-1])+2;
    }
    cout<<ans;
    return 0;
}
