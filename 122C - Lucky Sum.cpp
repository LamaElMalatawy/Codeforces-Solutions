#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

using namespace std;

vector<ll>lucky;
void solve(ll x){
    if(x>10e10)
        return;

    ll next4=10*x+4;
    lucky.push_back(next4);
    ll next7=10*x+7;
    lucky.push_back(next7);

    solve(next4);
    solve(next7);

}

int main() {

    IO;
    ll l,r;
    cin>>l>>r;
    solve(0);
    sort(lucky.begin(),lucky.end());
    ll ans=0;
    for (ll i:lucky) {
        if (i>=l) {
            ans+=(i) * (min(i, r) - l + 1);
            l = i + 1;
        }
        if(l>r)break;
    }

    cout<<ans;
    return 0;
}
