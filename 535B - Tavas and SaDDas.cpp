#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N];


using namespace std;

vector<ll>lucky;
void check(ll n){
    if(n>1e10)
        return;
    if(n)
    lucky.push_back(n);

    check(n*10+4);
    check(n*10+7);
}
int main() {

    IO;
    check(0);
    sort(lucky.begin(),lucky.end());
    ll n;
    cin>>n;
    for (int i = 0; i < lucky.size(); ++i) {
        if(n==lucky[i])
        {
            cout<<i+1;
            return 0;
        }
    }


    return 0;
}
