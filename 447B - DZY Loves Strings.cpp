#include <bits/stdc++.h>
using namespace std;
long long const int N=1e5;
#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)


ll b[N]={0},c[N]={0};

using namespace std;

int main() {

   string s;
   cin>>s;
   int n;
   char a = 'a';
   map<char,int>mp;
    cin>>n;
    ll mx=0,ans=0;
    for (int i = 0; i < 26; ++i) {
        cin>>b[i];
        mp[a++]=b[i];
        mx=max(mx,b[i]);
    }
    for (int i = 0; i < s.size(); ++i) {
        ans+=mp[s[i]]*(i+1);
    }
    for (int i = 1; i <= n; ++i) {
        ans+=(s.size()+i)*mx;
    }
    cout<<ans;

    return 0;
}
