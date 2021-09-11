#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;


ll solve(ll i){
   ll sum=0;
    while (i>0){
        sum+=(i%10);
        i/=10;
    }
    return sum;

};
int main() {

    // based on the solution of a quadratic eq ( x= (- b +- sqrt(b*b-4ac))
    IO;

    ll n;
    cin>>n;

    ll d,sq,x;

    for (int i = 0; i <=90; ++i) {
        d = i*i+4*n;
        sq=(long)sqrt(d);

        if(sq*sq==d)
        {
            x=(-i+sq)/2;
            if(x>=0 && solve(x)==i){
                cout<<x;
                return 0;
            }

            x=(-i-sq)/2;

            if(x>=0 && solve(x)==i)
            {
                cout<<x;
                return 0;
            }
        }
    }

    cout<<-1;
    return 0;
}
