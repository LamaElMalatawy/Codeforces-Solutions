#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int t;
    cin>>t;
    ll n,m;
    while (t--){

        cin>>n;
        m=n;
        if(n%3==0)
            cout<<n/3<<" "<<n/3<<endl;
        else if(n==1)
        {
            cout<<"1"<<" "<<"0"<<endl;
        }
        else{
            for (int i = 0; i < 3; ++i) {
                n++;
                if(n%3==0)
                    break;
            }
            n/=3;
            if((n+2*(n+1))==m)
                cout<<n<<" "<<n+1<<endl;
            else if(((n+1)+2*n)==m)
                    cout<<n+1<<" "<<n<<endl;
            else if((n+2*(n-1))==m)
                cout<<n<<" "<<n-1<<endl;
            else if(((n-1)+2*n)==m)
                cout<<n-1<<" "<<n<<endl;
        }
    }
    return 0;
}
