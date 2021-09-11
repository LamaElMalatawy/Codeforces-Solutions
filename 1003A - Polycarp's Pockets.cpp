#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
const ll N=1e6+5;
using namespace std;



int a[N]={0},b[N]={0};


int main() {

    IO;
    int n,mx=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        ++b[a[i]];
        mx=max(mx,b[a[i]]);
    }
    cout<<mx;
    return 0;
}
