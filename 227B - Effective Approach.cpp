#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N],b[N]={0};


using namespace std;

int main() {

    IO;
    int n,m,x,q;
    ll ansV=0,ansP=0;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cin>>x;
        a[x]=i;
    }
    cin>>m;
    for (int i = 0; i < m; ++i) {
        cin>>q;
        ansV+=a[q];
        ansP+=(n-a[q]+1);
    }
    cout<<ansV<<" "<<ansP;
    return 0;
}
