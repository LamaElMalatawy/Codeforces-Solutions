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
    int t,cnt0,cnt1,ans;
    cin>>t;
    string s;
    while (t--){
        cin>>s;
        cnt0=0,cnt1=0;
        loop(i,0,s.size()){
            if(s[i]=='0')
                ++cnt0;
            else
                ++cnt1;
        }
        ans=min(cnt0,cnt1);
        if(ans&1)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
    return 0;
}
