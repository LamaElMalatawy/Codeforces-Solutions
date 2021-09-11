#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;

int main(){

    IO;
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        loop(i,0,n)
            cin >> a[i];
        ll ans=a[0];
        loop(i,1,n)
        ans&=a[i];

        cout<<ans<<endl;

    }
    return 0;
}
