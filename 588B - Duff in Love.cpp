#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
const ll N=1e6+5;
using namespace std;



//double a[N]={0},b[N]={0};

ll ans=0;
vector<int>vec;
void solve(ll x){
    for (ll i = 2; i*i <= x; ++i) {
        if(x%(i*i)==0)
            return;
    }
   ans=max(ans,x);
}

int main() {

    IO;
    ll n;
    cin>>n;
    for (ll i = 1; i*i <= n; ++i) {
        if(n%i==0){
            if(n/i==i)
            {
                solve(i);
            }else{
                solve(i);
                solve(n/i);
            }
        }
    }
    cout<<ans;
    return 0;
}
