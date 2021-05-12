#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)

using namespace std;

int main() {

    IO;
    int n;
    bool flag=false;
    cin>>n;
    vector<pair<int,int>>lp(n+1);
    for (int i = 0; i < n; ++i) {
        cin>>lp[i].first>>lp[i].second;
    }
    lp[n].first=1e5,lp[n].second=1e5;
    sort(lp.begin(),lp.end());
    for(int i=0;i<n;i++){
        if(lp[i].first<lp[i+1].first)
        {
            if(lp[i].second>lp[i+1].second)
            {
                flag=true;
                break;
            }
        }
    }
    cout<<(flag?"Happy Alex":"Poor Alex");

    return 0;
}
