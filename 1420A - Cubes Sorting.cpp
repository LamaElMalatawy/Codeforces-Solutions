#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<ll>vec(n);

        for (int i = 0; i < n; ++i) {
            cin>>vec[i];

        }
        bool flag= false;
        for (int i = 0; i < n-1; ++i) {
            if(vec[i]<=vec[i+1])
            {
                flag= true;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}