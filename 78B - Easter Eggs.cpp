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
    string s="ROYG";
    cout<<"IVB";
    for (int i = 0; i < n-3; ++i) {
        cout<<s[i%4];
    }
    return 0;
}
