#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int solve(int p)
{
    if(a[p])
        return a[p];
    int cnt=0;
    for (int i = 1; i*i <= p ; ++i) {
        if(p%i==0)
            if(p/i==i)
                ++cnt;
            else
                cnt+=2;
    }

    a[p]=cnt;
    return a[p];
}

int main() {


    IO;
    int a,b,c;
    cin>>a>>b>>c;
    ll sum=0;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b ; ++j) {
            for (int k = 1; k <= c ; ++k) {
                sum=(sum+solve(i*j*k))%1073741824;
            }
        }
    }
    cout<<sum;
    return 0;
}
