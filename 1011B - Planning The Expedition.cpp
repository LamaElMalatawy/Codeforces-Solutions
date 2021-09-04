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
    map<int,int>freq;
    for (int i = 0; i < m; ++i) {
        cin>>x;
        freq[x]++;
    }
    if(n>m)
    {
        cout<<0;
        return 0;
    }
    int cnt,ans;
    for (int i = 1; i <= m; ++i) {
        cnt=0;
        for (int j = 1; j <= 100; ++j) {
            cnt+=freq[j]/i;
        }
        if(cnt>=n)
            ans=i;
    }
        cout<<ans;
    return 0;
}
