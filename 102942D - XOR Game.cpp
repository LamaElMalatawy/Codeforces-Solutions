#include <bits/stdc++.h>
using namespace std;
long long const N=1e6+7;
long long int pre[N],suf[N];
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        bool isIn=false;
        cin>>a>>b;
        int co = (a^b);
        if(b>a){
            swap(a,b);
        }
        for(int i=1;i<=b;i++){
            if((i^a) > co){
                cout<<"Yes"<<"\n";
                isIn=true;
                break;
            }
        }
        if(!isIn)
            cout<<"No"<<"\n";
    }
    return 0;
}
