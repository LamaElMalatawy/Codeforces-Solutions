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
void solve(int n)
{
    int cnt=0;
    for (int i = 2; i <1e7 ; ++i) {
        if(isPrime(i)) {
            ++cnt;
            prime.push_back(i);
        }
        if(cnt==n)
            break;
    }
}

int main() {

    IO;
    int n;
    cin>>n;

    solve(n);
    for (int i = 0; i < n; ++i) {
        cout<<prime[i]<<" ";
    }
    return 0;
}
