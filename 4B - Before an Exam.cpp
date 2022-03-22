#include <bits/stdc++.h>
using namespace std;
long long const int N=2*1e5;
#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)


ll a[N]={0},b[N]={0};

using namespace std;

int main() {


    int d,t;
    cin>>d>>t;
    vector<pair<int,int>>vec(d);

    int minsum=0,maxsum=0;
    for (int i = 0; i < d; ++i) {
        cin>>vec[i].first>>vec[i].second;
        minsum+=vec[i].first;
        maxsum+=vec[i].second;
    }
    if(t<minsum || t>maxsum)
        cout<<"NO";
    else
    {
        int ans;
        cout<<"YES"<<"\n";
        for (int i = 0; i < d; ++i) {
            ans=min(vec[i].second,t-minsum+vec[i].first);
            cout<<ans<<" ";
            t-=ans;
            minsum-=vec[i].first;
        }
    }
    return 0;
}
