#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;

int main() {
   IO;
   int t,n,m,x;
   cin>>t;
   while(t--){
       cin>>n>>m;
       vector<int>vec(n);
       vector<bool>pos(n,0);
       for (int i = 0; i < n; ++i) {
           cin>>vec[i];
       }
       for (int i = 0; i < m; ++i) {
           cin>>x;
           --x;
           pos[x]=true;
       }
       for (int i = 0; i < n; ++i) {
           if(!pos[i])continue;
           int j=i;
           while (j<n && pos[j])++j;
           sort(vec.begin()+i,vec.begin()+j+1);
           i=j;
       }
       bool flag = true;
       for (int i = 0; i < n-1; ++i) {
           flag&=(vec[i]<=vec[i+1]);
       }
       cout<<(flag?"YES\n":"NO\n");
   }
    return 0;
}
