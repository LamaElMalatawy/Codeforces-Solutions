#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N];


using namespace std;

int main() {

    IO;
    int n;
    cin>>n;
    string s="";
    for (int i = 0; i < n; ++i) {
        if(i%4==0 || i%4==1)
            s+='a';
        else
            s+='b';
    }
    cout<<s;
    return 0;
}
