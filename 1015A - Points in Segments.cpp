#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,cnt=0;
    bool flag;
    cin>>n>>m;
    vector<pair<int,int>>seg(n);
    vector<int>sol;
    for(int i=0;i<n;i++){
        cin>>seg[i].first>>seg[i].second;
    }
    for(int i=1;i<=m;i++){
        flag=true;
        for(int j=0;j<n;j++){
            flag&=(i<seg[j].first ||i>seg[j].second);

        }
        if(flag)
        {
            cnt++;
            sol.push_back(i);
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        cout<<sol[i]<<" ";
    }
    return 0;
}
