#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

double a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n,t1,t2,k;
    cin>>n>>t1>>t2>>k;
    double x,y,ans1,ans2;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        ans1= x * t1 * (100 - k) / 100 + y * t2;
        ans2= y * t1 * (100 - k) / 100 + x * t2;
        a[i]=max(ans1, ans2);
        b[i]=a[i];
    }

    sort(a,a+n,greater<double>());
    vector<int>vis(n+1,0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(a[i]==b[j] && !vis[j])
            {
                cout<<j+1<<" "<<fixed<<setprecision(2)<<b[j]<<endl;
                vis[j]=1;
                break;
            }
        }

    }
    return 0;
}
