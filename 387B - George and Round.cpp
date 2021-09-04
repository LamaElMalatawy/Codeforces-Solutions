#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n,m,x;
    cin>>n>>m;
    vector<int>vis(m+1,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];

    }
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
    }
    int cnt=0;
    int mn=min(n,m);
    for (int i = 0; i < mn; ++i) {
        bool flag= false;
        for (int j = 0; j < m; ++j) {
              if(a[i]<=b[j] && !vis[j]) {
                  vis[j] = 1;
                  flag=true;
                  break;
              }
        }
        if(!flag)
            cnt++;
    }
    cout<<cnt+n-mn;
    return 0;
}
