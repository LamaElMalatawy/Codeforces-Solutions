#include <bits/stdc++.h>
using namespace std;
long long const int N=1e5;
#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)


ll a[N]={0},b[N]={0};

using namespace std;

int bin(int n){
    int cnt=0;
    while (n>0)
    {
        cnt+=(n%2);
        n/=2;
    }
    return cnt;
}

int main(){

    int n,m,k,x,ans=0;
    cin>>n>>m>>k;
    for (int i = 0; i < m;  ++i) {
        cin>>a[i];
    }
    cin>>x;
    int l;
    for (int i = 0; i < m ; ++i) {
        l=(x ^ a[i]);
        if(bin(l)<=k)
            ++ans;

        }


    cout << ans;


    return 0;
}
