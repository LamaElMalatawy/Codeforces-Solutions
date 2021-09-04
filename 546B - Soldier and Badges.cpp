#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

double a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    ll ans=0;
    for (int i = 0; i < n; ++i) {
        if(i!=n-1) {
            if (a[i] == a[i + 1]) {
                ans++;
                a[i + 1]++;
            }
            else if(a[i]>a[i+1])
            {
                ans+=(a[i]-a[i+1]+1);
                a[i+1]+=(a[i]-a[i+1]+1);

            }
        }else{
            if(a[i]==a[i-1])
            {
                ans++;
               
            }
        }

    }
    cout<<ans;
    return 0;
}
