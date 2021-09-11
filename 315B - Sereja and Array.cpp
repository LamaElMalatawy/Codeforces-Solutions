#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;



int main() {

    IO;
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int op,v,x,y,k;
    ll cnt=0;
    for (int i = 0; i < m; ++i) {
        cin>>op;
        if(op==1){
          cin>>v>>x;
          a[v-1]=x-cnt;
          //cout<<a[v-1]+cnt<<endl;
        }else if(op==2){
            cin>>y;
            cnt+=y;
        }else{
            cin>>k;
          cout<<a[k-1]+cnt<<'\n';
        }
    }
    return 0;
}
