#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

using namespace std;

int main() {

    IO;
    int t;
    cin>>t;
    while (t--){
        vector<int>vec(4);
        for (int i = 0; i < 4; ++i) {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        cout<<vec[0]*vec[2]<<'\n';
    }
    return 0;
}
