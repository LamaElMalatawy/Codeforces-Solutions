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

    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        ++b[a[i]];
    }


    sort(a,a+n,greater<int>());

    for (int i = 0; i < n; ++i) {
            if(b[a[i]]&1) {
                 cout << "Conan";
                return 0;
            }

    }

    cout<<"Agasa";
    return 0;
}
