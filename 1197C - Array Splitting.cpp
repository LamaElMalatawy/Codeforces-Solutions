#include <bits/stdc++.h>

#define ll long long

using namespace std;
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k,ans;
    cin>>n>>k;

    vector<int>vec(n);
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
    }
    if(k==n)
    {
        cout<<0;
        return 0;
    }
    if(k==1)
    {
        cout<<*(--vec.end())-*vec.begin();
        return 0;
    }
    vector<int>v;
    for (int i = 1; i < n; ++i) {
       v.push_back(vec[i-1]-vec[i]);
    }
    sort(v.begin(),v.end());
    ans=vec[n-1]-vec[0];
    for (int i = 0; i < k - 1; ++i) {
        ans+=v[i];
    }

    cout<<ans;
    return 0;
}
