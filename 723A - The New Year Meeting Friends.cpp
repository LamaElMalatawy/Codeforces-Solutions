#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;
    int x1,x2,x3,ans;
    cin>>x1>>x2>>x3;
    vector<int>vec;
    vec.push_back(x1);
    vec.push_back(x2);
    vec.push_back(x3);
    sort(vec.begin(),vec.end());
    ans=vec[2]-vec[0];
    cout<<ans;
    return 0;
}