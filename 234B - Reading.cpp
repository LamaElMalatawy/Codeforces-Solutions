#include <bits/stdc++.h>
using namespace std;
long long const int N=1e5;
#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)


ll a[N]={0},b[N]={0};

using namespace std;

int main(){

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);


    int n,m,x;
    cin>>n>>m;
    vector<pair<int,int>>vec(n);
    for (int i = 0; i < n; ++i) {
        cin>>x;
        vec[i].first=x;
        vec[i].second=i+1;
    }

    sort(vec.rbegin(),vec.rend());

    cout<<vec[m-1].first<<endl;
    for (int i = 0; i < m; ++i) {
        cout<<vec[i].second<<" ";
    }


    return 0;
}
