#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N],b[N]={0};


using namespace std;

int main() {

    IO;
    int n,cntA=0,cntF=0,cntI=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n; ++i) {
        if(s[i]=='A')
            cntA++;
        else if(s[i]=='F')
            cntF++;
        else if(s[i]=='I')
            cntI++;
    }
    if (cntI==0)
        cout<<cntA<<endl;
    else if(cntI==1)
        cout<<cntI<<endl;
    else
        cout<<0<<endl;
    return 0;
}
