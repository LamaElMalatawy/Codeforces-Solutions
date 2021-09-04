#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n,k;
    cin>>n>>k;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    int pos=0;
    ll mn=1e10;
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < n; j+=k) {
            b[i]+=a[(i+j+k)%n];
        }
        if(b[i]<mn)
        {
            mn=b[i];
            pos=i+1;
        }
    }


    cout<<pos;
    return 0;
}
