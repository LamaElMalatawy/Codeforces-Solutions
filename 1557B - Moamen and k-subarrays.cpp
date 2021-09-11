#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
const ll N=2e6+5;
using namespace std;


ll a[N]={0},b[N]={0};

int main() {

    IO;
    int t;
    cin>>t;
    while (t--){
        int k,n;
        cin>>n>>k;
        vector<pair<ll,int>>vec(n);
        ll x;
        int cnt=0;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            vec[i].first=x;
            vec[i].second=i;
        }
        sort(vec.begin(),vec.end());
        for (int i = 0; i < n-1; ++i) {
            //cout<<vec[i].second<<" ";
            if(vec[i+1].second-vec[i].second==1)
                ++cnt;
        }
        if((n-cnt)<=k)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    return 0;
}
