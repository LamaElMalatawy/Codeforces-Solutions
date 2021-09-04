#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N];


using namespace std;

int main() {

    IO;
    int n;
    cin>>n;
    vector<pair<ll,ll>>vec(n);
    ll mn=1e9+6,mx=0;
    for (int i = 0; i < n; ++i) {
        cin>>vec[i].first>>vec[i].second;
        mn=min(mn,vec[i].first);
        mx=max(mx,vec[i].second);
    }
    for (int i = 0; i < n; ++i) {
        if(vec[i].first==mn && vec[i].second==mx)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
