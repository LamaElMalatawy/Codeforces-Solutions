#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N]={0},b[N]={0};

using namespace std;



int main() {


    IO;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        b[a[i]]++;
    }
        int mx=0;
        for (int i = 0; i < n; ++i) {
           mx=max(b[a[i]],mx);
        }
        cout<<n-mx;
        
    return 0;
}
