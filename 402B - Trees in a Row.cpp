#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;
int main() {

    IO;

    int n,k;
    cin>>n>>k;
    for (int i = 0; i < n; ++i)
        cin>>a[i];

    int cnt,mn=1e6+5,idx;
    for (int i = 1; i < 1005; ++i) {
        cnt=0;
        for (int j = 0; j < n; ++j) {
            if (a[j] != i + k * j)
                cnt++;
        }
            if(cnt<mn)
            {
                mn=cnt;
                idx=i;
            }

    }
    cout<<mn<<endl;
    for (int i = 0; i < n; ++i) {
        if(a[i]>idx+k*i)
            cout<<"- "<<i+1<<" "<<a[i]-(idx+k*i)<<endl;
        else if(a[i]<idx+k*i)
            cout<<"+ "<<i+1<<" "<<(idx+k*i)-a[i]<<endl;
    }

    return 0;
}
