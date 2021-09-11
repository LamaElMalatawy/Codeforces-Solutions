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

    ll n,m;
    cin>>n>>m;
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    sort(a, a+m);
    int cnt=1;
    if(a[0] == 1 || a[m - 1] == n)
        cout<<"NO";
    else
    {
        for (int i = 1; i < m; ++i) {
            if(a[i]-a[i-1]==1)
                 ++cnt;
            else
                 cnt=1;

            if(cnt>=3) {
                cout << "NO";
                return 0;
            }
        }
        cout<<"YES";
    }

    return 0;
}
