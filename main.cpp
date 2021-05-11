#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;

int main() {

    IO;
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        int ans=0;
        for (int i = 0; i < n; ++i) {
            cin>>a;
        if (a==1 || a==3)
            ans++;
        }
        cout<<ans<<'\n';
    }

    return 0;
}
