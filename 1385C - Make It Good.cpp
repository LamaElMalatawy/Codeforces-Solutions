#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
using namespace std;

int main()
{
    IO;
    int t,n;
    cin>>t;
    while (t--){
        cin>>n;
        vector<int>vec(n);
        for (int i = 0; i < n; ++i) {
            cin>>vec[i];
        }
        int ptr=n-1;
        while (ptr>=1 && vec[ptr-1]>=vec[ptr])
            --ptr;
        while (ptr>=1 && vec[ptr-1]<=vec[ptr])
            --ptr;
        cout<<ptr<<'\n';
    }

    return 0;
}
