#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N]={0},b[N]={0};

using namespace std;


int main() {

    IO;
    int k;
    ll n;
    cin>>n>>k;
    while (k--){
        if(n%10==0)
            n/=10;
        else
            --n;

    }
    cout<<n;
    return 0;
}
