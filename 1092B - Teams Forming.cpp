#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,ans=0;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    sort(vec.begin(),vec.end());
    for (int i = 0; i < n; i+=2) {
        ans+=(vec[i+1]-vec[i]);
    }

    cout<<ans;
    return 0;
}
