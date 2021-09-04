#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;
vector<ll>vec;
void solve(){

    for (int i = 1; i <=12e6; ++i) {
        int total=0;
        int j=i;
        while (j)
        {
            total+=j%10;
            j/=10;
        }
        if(total==10) {
            vec.push_back(i);
        }

    }
}

int main() {


    IO;

    int k;
    cin>>k;
    solve();
    cout<<vec[--k];
    return 0;
}
