#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;



int main() {

    IO;
    int t;
    cin>>t;
    ll n,m;
    while(t--){
        cin>>n;
        if(n%4==0) {
            cout << n * 4 + 1 << endl;
        }else if(n%4==1)
        {
            cout<<n*2+1<<endl;
        }else if(n%4==2)
        {
            cout<<n*4+1<<endl;
        }else
        {
            cout<<n*1+1<<endl;
        }
    }
    return 0;
}
