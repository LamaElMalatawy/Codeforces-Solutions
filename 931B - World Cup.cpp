#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n,a,b;
    cin>>n>>a>>b;
    if(a>b)
        swap(a,b);

    int m=log2(n),cnt=0;
    
        n/=2;
        while (a>n || b<=n){
            if(b>n)
            {
                a-=n;
                b-=n;
            }
            n/=2;
            cnt++;
        }
    if(cnt==0)
        cout<<"Final!";
    else
        cout<<m-cnt;
    return 0;
}
