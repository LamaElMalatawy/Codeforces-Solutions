#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

vector<int>pFactors;
void solve(int n){

    while(n%2==0)
    {
        pFactors.push_back(2);
        n/=2;
    }
    for (int i = 3; i*i <= n; i+=2) {
        while (n%i==0)
        {
            pFactors.push_back(i);
            n/=i;
        }
    }
    if(n>2)
        pFactors.push_back(n);
}

int main() {


    IO;
    int n,k;
    cin>>n>>k;
    solve(n);


    if(pFactors.size()==k)
        for (int i = 0; i < k; ++i) {
            cout<<pFactors[i]<<" ";
        }
    else if(pFactors.size()>k)
    {
        for (int i = 0; i < k-1; ++i) {
            cout<<pFactors[i]<<" ";
        }
        ll prod=1;
        for (int i = k-1; i < pFactors.size(); ++i) {

            prod*=pFactors[i];
        }
        cout<<prod;
    }
    else
        cout<<-1;

    return 0;
}
