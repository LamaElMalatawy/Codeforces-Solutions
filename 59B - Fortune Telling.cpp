#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N]={0},b[N]={0};

using namespace std;


int main() {

    IO;
    int n;
    cin>>n;
    int sum=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum&1)
    cout<<sum;
    else {
        sort(a, a + n);
        for (int i = 0; i < n; ++i) {
            if(a[i]&1)
            sum -= a[i];
            if (sum & 1) {
                cout << sum;
                return 0;
            }
        }
        cout << 0;
    }
    return 0;
}
