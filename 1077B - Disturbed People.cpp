#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;

   int n;
   cin>>n;
   vector<int>h(n);
    for (int i = 0; i < n; ++i) {
        cin>>h[i];
    }
    int cnt=0;
    for (int i = 1; i < n-1; ++i) {
        if(h[i]==0 && h[i-1]==1 && h[i+1]==1)
        h[i+1]=0,cnt++;
    }
   cout<<cnt;

    return 0;
}