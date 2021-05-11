#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;

int main() {

    IO;
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<pair<int,int>>xy(n);
        for(int i=0;i<n;i++)
            cin>>xy[i].first>>xy[i].second;
        sort(xy.begin(),xy.end());
        bool flag=false;
        for (int i = 0; i < n-1; ++i) {
            if(xy[i].second>xy[i+1].second)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"NO\n";
            continue;
        } else{
            string s="";
            int distX=0,distY=0;
            distX+=xy[0].first-0,distY+=xy[0].second-0;
            s+=string(distX,'R');
            s+=string(distY,'U');
            for (int i = 0; i < n-1; ++i) {
                distX=abs(xy[i].first-xy[i+1].first);
                distY=abs(xy[i].second-xy[i+1].second);
                s+=string(distX,'R');
                s+=string(distY,'U');
            }
            cout<<"YES\n";
            cout<<s<<'\n';
        }
    }

    return 0;
}