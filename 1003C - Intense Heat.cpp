#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
const ll N=1e6+5;
using namespace std;



double a[N]={0},b[N]={0};


int main() {

    IO;

    int n,k;
    cin>>n>>k;
    for (int i = 1; i <= n; ++i) {
        cin>>a[i];
        a[i]=a[i-1]+a[i];
    }
    double mx=0.0,x;
    for (int i = 0; i<=n; ++i) {
        for (int j = i+k; j <=n; ++j) {
            x=(a[j]-a[i])/(j-i);
            mx=max(mx,x);

        }
    }
    cout<<fixed<<setprecision(15)<<mx;

    return 0;
}
