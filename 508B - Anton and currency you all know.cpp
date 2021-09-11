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

   string s;
   cin>>s;
   bool flag=false,found=false;
   int l = s[s.size()-1]-'0';
   for (int i = 0; i < s.size(); ++i) {
       if(!((s[i]-'0')%2))
       {
           flag=true;
           if((s[i]-'0')<l) {
               swap(s[i], s[s.size() - 1]);
               found=true;
               break;
           }

       }
   }
   if(!flag)
       cout<<-1;
   else if(found)
       cout<<s;
   else {
       for (int i = s.size() - 1; i >= 0; --i) {
           if (!((s[i] - '0') % 2)) {
               if ((s[i] - '0') > l) {
                   swap(s[i], s[s.size() - 1]);
                   cout << s;
                   return 0;
               }

           }
       }
   }

    return 0;
}
