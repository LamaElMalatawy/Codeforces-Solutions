#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

using namespace std;
int main() {
    IO;
    int n,m;
    cin>>n>>m;
    char arr[15][15];
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin>>arr[i][j];
        }
    }
    int ans=0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if(arr[i][j]=='W')
            if(arr[i-1][j]=='P' || arr[i+1][j]=='P' || arr[i][j-1]=='P' || arr[i][j+1]=='P')
                ++ans;
        }

    }cout<<ans;
    return 0;
}
