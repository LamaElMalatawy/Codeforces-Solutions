#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {


    IO;
    int n,cnt=0;
    cin>>n;
    bool flag=true;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        if(a[i]!=i)
        {

            flag=false;
            b[a[i]]=i;
        }
        else
            cnt++;
    }
    if(flag)
    {
        cout<<cnt;
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (a[i]!=i && b[i]==a[i]) {
                flag = true;
                 break;
            }
        }
        if(flag)
            cout<<cnt+2;
        else
            cout<<cnt+1;
    }
    return 0;
}
