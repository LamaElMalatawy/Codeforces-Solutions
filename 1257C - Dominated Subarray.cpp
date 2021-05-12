#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n,ans=2e5;
        cin>>n;
        vector<int>vec(n);
        vector<int>pos(n+1,-5);
        for (int i = 0; i < n; ++i) {
            cin>>vec[i];
        }
        for (int i = 0; i < n; ++i) {
            if(pos[vec[i]]!=-5)
                ans=min(ans,(i-pos[vec[i]]+1));
            pos[vec[i]]=i;
        }
        if(ans>n)cout<<-1<<'\n';
        else
            cout<<ans<<'\n';
    }
    return 0;
}
