#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0) cin.tie(NULL) cout.tie(NULL)
#define ll long long
using namespace std;

int main() {

    int t,min;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>vec(n);
        for (int i = 0; i < n; ++i) {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        min=*vec.begin();
        int cnt=0;
        for (int i = 1; i < n; ++i) {
            if(vec[i]!=min)
                cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}