#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int t,n,cnt;
    cin>>t;
    string s,str;
    while (t--){
        cnt=0;
        cin>>n>>s;
        str=s;
        sort(s.begin(),s.end());
        for (int i = 0; i < n; ++i) {
            if(s[i]!=str[i])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
