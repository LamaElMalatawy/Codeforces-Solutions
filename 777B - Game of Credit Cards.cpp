#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)

const int N=1e6+5;

ll a[N]={0},b[N]={0},c[N]={0};

using namespace std;


int main() {


    IO;

    int n;
    cin>>n;
    string s,m;
    cin>>s>>m;
    int cnt1=0,cnt2=0;
    for (int i = 0; i <n ; ++i) {
        a[i]=m[i]-'0';
        ++b[a[i]];
        ++c[a[i]];
    }

    sort(a,a+n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[j] >=( s[i] - '0') && b[a[j]]) {
                --b[a[j]];
                ++cnt1;
                break;
            }
        }
        for (int j = 0; j < n; ++j) {
            if(a[j]>(s[i]-'0') && c[a[j]]){
                --c[a[j]];
                ++cnt2;
                break;
            }
        }
    }
    cout<<n-cnt1<<endl<<cnt2;
    return 0;
}
