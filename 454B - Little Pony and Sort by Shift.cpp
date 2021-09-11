#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N]={0},b[N]={0};

using namespace std;


int main() {

    IO;
    int n,cnt=0,idx;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        if( i && a[i]< a[i-1]) {

            cnt++;
            idx=i;
        }
    }

    if(!cnt)
        cout<<0;
    else if(cnt==1 && a[0]>=a[n-1])
        cout<<n-idx;
    else
        cout<<-1;
    return 0;
}
