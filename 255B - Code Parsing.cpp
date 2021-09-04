#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    string s;
    cin>>s;
    int cntx=0,cnty=0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='x')
            cntx++;
        else
            cnty++;
    }
    int sz=abs(cnty-cntx);
    if(cnty>cntx)
        for (int i = 0; i < sz; ++i) {
            cout<<'y';
        }
    else if(cntx>cnty)
    {
        for (int i = 0; i < sz; ++i) {
            cout<<'x';
        }
    }
    else
        cout<<"";


    return 0;
}
