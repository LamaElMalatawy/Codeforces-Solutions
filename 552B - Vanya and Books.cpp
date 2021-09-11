#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;



int main() {

    IO;
    string s;
    ll int m,sum=0;
    cin>>m;
    s=to_string(m);
    int n=s.size();
    if(n==1)
        sum=m;
    else if(n==2)
        sum=9+(m-9)*n;
    else if(n==3)
        sum=9+90*2+(m-99)*n;
    else if(n==4)
        sum=9+90*2+900*3+(m-999)*n;
    else if(n==5)
        sum=9+90*2+900*3+9000*4+(m-9999)*n;
    else if(n==6)
        sum=9+90*2+900*3+9000*4+90000*5+(m-99999)*n;
    else if(n==7)
        sum=9+90*2+900*3+9000*4+90000*5+900000*6+(m-999999)*n;
    else if(n==8)
        sum=9+90*2+900*3+9000*4+90000*5+900000*6+9000000*7+(m-9999999)*n;
    else if(n==9)
        sum=9+90*2+900*3+9000*4+90000*5+900000*6+9000000*7+90000000*8+(m-99999999)*n;
    else if(n==10)
        sum=10*(m+1)-1111111111;
    cout<<sum;
    return 0;
}
