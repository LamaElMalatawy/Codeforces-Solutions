#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;

    int t,n;
    cin>>t;
    while (t--){
        cin>>n;
        if(n==2)
            cout<<1<<'\n';
        else if(n==3)cout<<7<<'\n';
        else if(n==4)cout<<11<<'\n';
        else {
            if (n % 2) {
                cout << 7;
                int m = (n - 3) / 2;
                for (int i = 0; i < m; ++i) {
                    cout << 1;
                }cout<<'\n';
            } else {
                n /= 2;
                for (int i = 0; i < n; ++i) {
                    cout << 1;
                }
                cout << '\n';
            }
        }
    }

    return 0;
}