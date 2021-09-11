#include <bits/stdc++.h>
using namespace std;
long long const N=1e6+7;
long long int pre[N],suf[N];
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int co=0,co2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
                co++;
            else
                co2++;
        }
        string s1="ENWS",s2="ESWN";
        if(co>co2){
            co-=co2;
            cout<<s2[co%4]<<"\n";
        }
        else {
            co2 -= co;
            cout<<s1[co2%4]<<"\n";
        }
    }
}
