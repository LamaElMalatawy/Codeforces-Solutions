#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;

    int t,n,m,cnt=0;
    ll int sum=0;
    cin>>t;
    while(t--) {
        cin >> n >> m;
        int arr[15][15] = {0};
        int mini=1e6;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> arr[i][j];
                if (arr[i][j] < 0)
                   cnt++;
                mini=min(mini,abs(arr[i][j]));
                sum+=abs(arr[i][j]);
            }
        }//cout<<sum<<endl;
        if(cnt&1)
            cout<<(sum-2*mini)<<'\n';
        else
            cout<<sum<<'\n';
        cnt=0;
        sum=0;
    }

    return 0;
}