#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {

    int n;
    cin>>n;
    vector<ll>vec(n+1);

    for (int i = 1; i <= n; ++i) {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    ll ans=0,diff;

    int it;
    for (int i = 1; i <= n; ++i) {
       it=upper_bound(vec.begin(),vec.end(),vec[i]+5)-vec.begin()-1;
       diff=it-i+1;
       ans=max(ans,diff);


    }
    cout<<ans;
    return 0;
}
