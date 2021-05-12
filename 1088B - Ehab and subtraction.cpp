#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0) cin.tie(NULL) cout.tie(NULL)
#define ll long long
using namespace std;

int main() {

    int n, k, mini, cnt = 0;
    cin >> n >> k;
    set<ll> s;
    s.insert(0);
    ll a;
    while (n--){
        cin>>a;
        s.insert(a);
    }
    auto it=++s.begin();
    while (k--){
        if(it==s.end()){
            cout<<0<<'\n';
            continue;
        }
        cout<<*(it)-*(--it)<<'\n';
        it++;
        it++;

    }
    return 0;
}
