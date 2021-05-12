#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0) cin.tie(NULL) cout.tie(NULL)
#define ll long long
using namespace std;

int main() {

    int n,k,cnt=0;
    cin>>n>>k;
    vector<ll>vec(n);
    vector<ll>::iterator it;
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());

    if(k==0){
        if(vec[0]!=1) {
            cout << 1;
            return 0;
        }
        cout<<-1;
    }else {
        int res=vec[k-1];
        for (int i = 0; i < n; ++i) {
            if (vec[i] <= res)
                cnt++;
        }
        if (cnt != k)
            cout << -1;
        else
            cout << res;
    }
    return 0;
}