#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

//ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;

    int n, d;
    cin >> n >> d;
    if(d==0 && n>1) {
        cout << "No solution";
        return 0;
    }
    cout<<d;
    for (int i = 0; i < n - 1; ++i) {
        cout<<0;
    }


    return 0;
}
