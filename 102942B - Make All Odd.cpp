#include <bits/stdc++.h>
using namespace std;
long long const N=1e6+7;
long long int pre[N],suf[N];
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int e=0,o=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x&1)
                o++;
            else
                e++;
        }
        if(o==0){
            cout<<-1<<"\n";
            continue;
        }
        cout<<e<<"\n";
    }
}
