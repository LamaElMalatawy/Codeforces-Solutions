#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N];


using namespace std;

int main() {

    IO;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,ans=0;
    for (int i = 0; i < n; ++i) {
        if(s[i]=='x')
            cnt++;
        else
            cnt=0;
        if(cnt==3)
        {
            ++ans;
            --cnt;
        }
    }
    cout<<ans;
    return 0;
}
