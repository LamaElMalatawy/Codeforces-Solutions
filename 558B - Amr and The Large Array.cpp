#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
const ll N=2e6+5;
using namespace std;


ll a[N]={0},b[N]={0};

int main() {

    IO;
    ll n,x;
    cin>>n;
    map<ll,pair<int,int>>mp;
    ll mx=0,mn=1e9;
    for (int i = 1; i <= n; ++i) {
        cin>>x;
        ++b[x];
        mx=max(b[x],mx);
        if(b[x]==1)
            mp[x].first=i;
        else
            mp[x].second = i;

    }


    for (auto i:mp) {
        if(b[i.first]==mx)
        {
            a[i.first]=i.second.second-i.second.first;
            mn=min(a[i.first],mn);
        }
    }
    //cout<<mn<<endl;
    for (auto i:mp) {
        if(b[i.first]==mx && a[i.first]==mn)
        {
            if(mn<0)
                cout<<1<<" "<<1;
            else
            cout<<i.second.first<<" "<<i.second.second;
            return 0;
        }
    }
    return 0;
}
