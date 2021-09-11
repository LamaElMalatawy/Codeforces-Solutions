#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;

int main(){

    IO;
    int t,n,cnt;
    string s,str="BR";
    cin>>t;
    while (t--){
        cin>>n>>s;
        cnt=0;
        loop(i,0,s.size())
            if(s[i]=='?')
                ++cnt;
        if(cnt==n){
            s="";
            loop(i,0,n){
                s+=str[i%2];
            }
        }else {
            while (cnt) {
                loop(i, 0, s.size() - 1) {
                    if (s[i] == '?' && s[i + 1] == 'R')
                        --cnt, s[i] = 'B';
                    else if (s[i] == '?' && s[i + 1] == 'B')
                        --cnt, s[i] = 'R';
                    else if (s[i] == 'B' && s[i + 1] == '?')
                        --cnt, s[i + 1] = 'R';
                    else if (s[i] == 'R' && s[i + 1] == '?')
                        --cnt, s[i + 1] = 'B';
                }
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
