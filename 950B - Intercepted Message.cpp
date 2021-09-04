#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N],b[N];


using namespace std;

int main() {

    IO;

    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
    }

    ll sum1=a[0],sum2=b[0];
    int i=0,j=0,cnt=0;
    while (i<n && j<m)
    {
        if(sum1<sum2)
        {
            i++;
            sum1+=a[i];
        }
        if(sum1>sum2)
        {
            j++;
            sum2+=b[j];
        }
        if(sum1==sum2)
        {
            cnt++;
            i++;
            j++;
            sum1=a[i];
            sum2=b[j];
        }
    }

    cout<<cnt;
    return 0;
}
