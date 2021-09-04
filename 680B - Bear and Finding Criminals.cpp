#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {


    IO;
    int n,x;
    cin>>n>>x;
    for (int i = 1; i <= n; ++i) {
        cin>>a[i];
    }
    int cnt=0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i+1; j <= n; ++j) {
            if(abs(i-x)==abs(j-x) && a[i]!=a[j])
            {
                b[i]=1;
                b[j]=1;
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        if(a[i] && !b[i])
            ++cnt;
    }
    cout<<cnt;
    return 0;
}
