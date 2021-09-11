#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N]={0},b[N]={0};

using namespace std;



int main() {

    IO;
    int n,ans=0;
    ll k;
   cin>>n>>k;
    for (int i = 0; i < n; ++i)
        cin>>a[i];



        ans=a[0];
        int cnt=0;
        for (int i = 1; i < n; ++i) {
            if (cnt >= k) {
                cout << ans;
                return 0;
            }
            if (ans < a[i]) {
                cnt = 1;
                ans = a[i];
            } else
                cnt++;

        }
    

     cout<<ans;


    return 0;
}
