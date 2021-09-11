#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

//ll a[N]={0},b[N]={0};

using namespace std;



int main() {

    IO;
    int n;
    cin>>n;
    string y1="312831303130313130313031";
    string y2="312931303130313130313031";
    string y4 = y1+y1+y1+y2+y1+y1+y1;
    string y="",s;
    for (int i = 0; i < n; ++i) {
        cin>>s;
        y+=s;
    }
    int f=y4.find(y);
    if(f==-1)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}
