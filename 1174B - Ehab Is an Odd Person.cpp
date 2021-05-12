#include <bits/stdc++.h>


#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,cntO=0,cntE=0;
    cin>>n;
    vector<ll>vec(n);
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
        if(vec[i]&1)
            cntO++;
        else
            cntE++;
    }
    if(cntE==n || cntO==n){
        for (int i = 0; i < n; ++i) {
            cout<<vec[i]<<" ";
        }
        return 0;
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i < n; ++i) {
         cout<<vec[i]<<" ";
    }
    return 0;
}
