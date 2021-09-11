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
    for (int i = 1; i <= n; ++i) {
        cin>>a[i];
        b[a[i]]++;
    }
    int cnt=0;
    for (int i = 1; i <= n ; ++i) {
        if(!b[i])
            cnt++;
    }

    cout<<cnt;
    return 0;
}
