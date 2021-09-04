#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N],b[N]={0};


using namespace std;

int main() {

    IO;
    int n, m;
    cin >> n;
    m = n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    bool flag=true;
    while (m--) {
        for (int i = 0; i < n; i += 2) {
            a[i] = (++a[i] % n);
        }
        for (int i = 1; i < n; i += 2) {
            a[i] = ((--a[i] % n) + n) % n;
        }

        for (int i = 0; i < n; ++i) {
            if(a[i]!=i) {
                flag = false;
                break;}
        }
        if(flag)
        {
            cout<<"Yes";
            return 0;
        }
        flag=true;
    }

    cout<<"No";
    return 0;
}
