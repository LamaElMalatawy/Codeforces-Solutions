#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);


    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n,ans=1e9,res;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    sort(vec.begin(),vec.end());
    for(int i=0;i<n-1;i++){
        auto it=upper_bound(vec.begin(),vec.end(),2*vec[i])-vec.begin();
        res=(i+(n-it));
        ans=min(ans,res);
    }
    cout<<ans;
    return 0;
}
