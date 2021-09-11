#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
//#define ll long long

//const int N=1e6+5;

//ll a[N]={0},b[N]={0};

using namespace std;

bool isPrime(int n){
    for (int i = 2; i*i <=n ; ++i) {
        if(n%i==0)
            return false;
    }
    return true;
}


int main() {

    IO;
    int n;
    cin>>n;
    if(n>2)
      cout<<2<<endl;
    else
        cout<<1<<endl;
    for (int i = 2; i < n+2; ++i) {
        if(isPrime(i))
            cout<<1<<" ";
        else
            cout<<2<<" ";
    }
    return 0;
}
