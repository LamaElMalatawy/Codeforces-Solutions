#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n;
    ll k;
    cin>>n>>k;
    if(k&1)
        cout<<1;
    else
    {

        ll cnt=1;
        bool flag= false;
        while (ceil(log2(k))!=floor(log2(k))) {
            k /= 2;
            cnt++;
            if(k&1) {
                flag= true;
                break;
            }
        }
        if (flag)
            cout<<cnt;
        else
        cout<<log2(k)+1;

    }

    return 0;
}
