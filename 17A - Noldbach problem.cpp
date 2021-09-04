#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

bool isPrime(int x){
    for (int i = 2; i*i <= x; ++i) {
        if(x%i==0)
            return false;

    }
    return true;
}
vector<int>prime;
void solve(int n){
    for (int i = 2 ; i <= n; ++i) {
        if(isPrime(i))
            prime.push_back(i);
    }
}
int main() {


    IO;

    int n,k;
    cin>>n>>k;
    solve(n);
    int cnt=0;

    if(k==0)
    {
        cout<<"YES";
        return 0;
    }
    for (int i = 0; i < prime.size()-1; ++i) {
        if(isPrime(prime[i]+prime[i+1]+1)  )
        {
            if((prime[i]+prime[i+1]+1)>n)
                break;
            cnt++;
            if(cnt==k)
            {
                cout<<"YES";
                return 0;
            }
        }
    }

    cout<<"NO";

return 0;
}
