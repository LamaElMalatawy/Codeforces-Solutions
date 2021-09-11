#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)

const ll N=1e6+1;

char a[1010][1010]={'-'};
//b[N]={0};

using namespace std;

vector<ll>b(N,0);
int main() {

   int t;
   cin>>t;
   while(t--){
       bool isIn=false;
       string s;
       cin>>s;
           if(s.find('c') < s.find('e') || s.find('c') < s.find('z') || s.find('p') < s.find('z')|| s.find('c')<s.find('p')){
                   cout << "NO" << "\n";
                   isIn = true;
           }
       if(!isIn)
           cout<<"YES"<<"\n";
   }
    return 0;
}
