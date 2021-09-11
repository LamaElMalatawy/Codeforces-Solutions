#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;

int solve(int a,int b, int c){
    a%=b;

    for (int i = 1; i <= b ; ++i) {

        a*=10;

        if(a/b==c)
            return i;

        a%=b;
    }

    return -1;
}


int main(){
    IO;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<solve(a,b,c);
    return 0;
}
