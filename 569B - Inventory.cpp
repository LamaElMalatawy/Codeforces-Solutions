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
        b[a[i]]=1;
    }
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    queue<int>qu;
    for (int i = 1; i <= n; ++i) {
        if(!b[i])
            qu.push(i);
    }

    for (int i = 1; i <= n; ++i) {
        if (b[a[i]]==1 && (a[i]>=1 && a[i]<=n)) {
            b[a[i]]=-1;
            cout << a[i]<<" ";
        }
        else {
            cout << qu.front() << " ";
            qu.pop();
        }
    }

    return 0;
}
