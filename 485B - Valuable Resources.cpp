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
        cin>>a[i]>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    ll ans=max((a[n-1]-a[0]),(b[n-1]-b[0]));
    cout<<ans*ans;

    return 0;
}
