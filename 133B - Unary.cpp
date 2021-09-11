#include <bits/stdc++.h>
using namespace std;
long long const int N=1e5;
#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)


ll a[N]={0},b[N]={0};

using namespace std;

int main() {

    string s;
    cin>>s;
    int arr [256];
    arr['>']=8;
    arr['<']=9;
    arr['+']=10;
    arr['-']=11;
    arr['.']=12;
    arr[',']=13;
    arr['[']=14;
    arr[']']=15;

    ll ans=0;
    for (int i = 0; i < s.size(); ++i) {
        ans=(ans*16+arr[s[i]])%1000003;
    }

    cout<<ans;

    return 0;
}
