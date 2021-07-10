#include <bits/stdc++.h>
 
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
 
const int N=1e6+5;
 
ll a[N],b[N]={0};
 
 
using namespace std;
 
int main() {
 
    IO;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    bool end= true;
    for (int i = 1; i <= n; ++i) {
        if(s[i-1]!='.')
            end=false;
    }
    if(end)
    {
        cout<<n;
        return 0;
    }
    for (int i = n; i >=1; --i) {
 
        if (s[i-1] == 'R')
            break;
        else if(s[i-1]=='L') {
            cnt+=n-i;
            break;
        }
 
    }
 
    int pos=0;
    bool flag1=false,flag2=false;
    for (int i = 1; i <= n; ++i) {
        if(s[i-1]=='R' && !flag1){
            flag1= true;
            flag2= true;
            pos=i;
            cnt+=(i-1);
        }else if(s[i-1]=='L' &&!flag1){
            flag1=true;
            flag2= false;
            pos=i;
        }
        else if (s[i-1] == 'R' && !flag2) {
            flag2 = true;
            cnt+=(i-pos-1);
            pos=i;
 
        } else if (s[i-1] == 'L' && flag2) {
            flag2 = false;
            if ((i-pos-1) & 1)
                cnt++;
            pos=i;
 
        }
    }
 
    cout<<cnt;
  
    return 0;
}
