#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

using namespace std;
int main() {

    IO;
    int t;
    ll r,b,d;
    cin>>t;
    while (t--){
       cin>>r>>b>>d;
       if(r>b)
           swap(r,b);
       if(b>r*(d+1))
           cout<<"NO\n";
       else
           cout<<"YES\n";
    }

    return 0;
}
