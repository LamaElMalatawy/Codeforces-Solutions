#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N],b[N]={0};


using namespace std;

int main() {

    IO;
   string s;
   cin>>s;
   if(s.size()==1) {
       cout << '0';
       return 0;
   }

    for (int i = 0; i < 4; ++i) {
        ll ans=0;
        for (int j = 0; j < s.size(); ++j) {
            ans += (s[j] - '0');
        }
             if(ans<10)
             {
                 cout<<i+1;
                 return 0;
             }
             s=to_string(ans);

    }


   return 0;
}
