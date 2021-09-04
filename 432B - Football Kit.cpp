#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

double a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n;
    cin>>n;
    vector<pair<int,int>>vec(n);
    map<ll,ll>mp;
    for (int i = 0; i < n; ++i) {
        cin>>vec[i].first>>vec[i].second;
        mp[vec[i].first]++;
    }
    
    for (int i = 0; i < n; ++i) {
        vec[i].first=(n-1)+mp[vec[i].second];
        vec[i].second=(n-1)-mp[vec[i].second];
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    return 0;
}
