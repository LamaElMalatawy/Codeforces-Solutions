#include <bits/stdc++.h>
using namespace std;
long long const int N=2*1e5;
#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)


ll a[N]={0},b[N]={0};

using namespace std;

int main() {

    int n,m=0;
    string s;
    cin>>n>>s;
    for (int i = 1; i <= (n/2) ; ++i) {
        if(s.substr(0,i)==s.substr(i,i))
            m=i-1;
    }
   cout<<n-m;

    return 0;
}
