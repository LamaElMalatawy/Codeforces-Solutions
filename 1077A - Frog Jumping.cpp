#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;

int main() {

    int t;
    ll a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(c==1){
            cout<<a<<endl;
            continue;
        }
        if(c&1 && c>1){
            a*=(c/2)+1;
            b*=(c/2);
        }else{
            a*=(c/2);
            b*=(c/2);
        }
        cout<<(a-b)<<endl;
    }

    return 0;
}
