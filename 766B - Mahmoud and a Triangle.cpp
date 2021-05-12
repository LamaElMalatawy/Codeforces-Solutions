#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0) cin.tie(NULL) cout.tie(NULL)
#define ll long long
using namespace std;

int main() {

    int n;
    cin>>n;
    vector<ll>vec(n+2);
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
    }
    vec[n]=vec[n+1]=-1;
    sort(vec.begin(),vec.end());
    for (int i = 0; i < n; ++i) {
        if(vec[i]+vec[i+1]>vec[i+2])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}