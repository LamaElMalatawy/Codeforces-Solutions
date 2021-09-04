#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N];


using namespace std;

int main() {

    IO;
    int n,idx;
    cin>>n;
    ll mx=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = n-1; i >=0 ; --i) {
        if(a[i]>mx)
        {
            b[i]=0;
            mx=a[i];
        }
        else
        {
            b[i]=mx+1-a[i];
        }

    }
    for (int i = 0; i < n; ++i) {
        cout<<b[i]<<" ";
    }

    return 0;
}
