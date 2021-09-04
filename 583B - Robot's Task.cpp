#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    vector<int>vis(n,0);
    int ans=0,cnt=0;
    while (true) {
        bool flag=true;
        for (int i = 0; i < n; ++i) {
            if (!vis[i] && a[i] <= cnt) {
                vis[i] = 1;
                    cnt++;
            }
        }
        for (int i = 0; i < n; ++i) {
            if(!vis[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
            break;
        ans++;
        flag=true;
        for (int i = n-1; i >=0 ; --i) {
            if(!vis[i] && a[i]<=cnt){
                vis[i]=1;
                cnt++;
            }
        }
        for (int i = 0; i < n; ++i) {
            if(!vis[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
            break;
        ans++;
    }
    cout<<ans;
    return 0;
}
