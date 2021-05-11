#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;

int main() {

    IO;

    int t,ans;
    double m;
    cin>>t;
    ll a,b;
    while (t--){
        cin>>a>>b;
        if (a==b)
            cout<<0<<'\n';
        else{
            m=(abs(a-b))/10.0;
            //cout<<m<<endl;
            if(m==(int)m)
                ans=m;
            else
            ans=m+1;
            cout<<ans<<'\n';
            }

        }

    return 0;
}