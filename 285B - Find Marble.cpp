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


    int n,s,t;
    cin>>n>>s>>t;
    if(s==t)
    {
        cout<<0;
        return 0;
    }
    for (int i = 1; i <= n; ++i) {
        cin>>a[i];
    }


    int cnt=0,m;
    while(s!=t && a[s]) {
          m = a[s];
          a[s]=0;
          s=m;
          cnt++;

    }

    if(s==t)
        cout<<cnt;
    else
        cout<<-1;


    return 0;
}
