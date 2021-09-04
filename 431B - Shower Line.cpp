#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

//ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    int a[6][6],c[6];
    IO;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < 5; ++i) {
        c[i]=i;
    }
ll ans,res=0;
    do {
        ans=0;
        ans+=(a[c[0]][c[1]]+a[c[1]][c[0]]+a[c[2]][c[3]]+a[c[3]][c[2]])+(a[c[1]][c[2]]+a[c[2]][c[1]]+a[c[3]][c[4]]+a[c[4]][c[3]])+(a[c[2]][c[3]]+a[c[3]][c[2]])+(a[c[3]][c[4]]+a[c[4]][c[3]]);
        res=max(ans,res);
    } while (next_permutation(c,c+5));

    cout<<res;
    return 0;
}
