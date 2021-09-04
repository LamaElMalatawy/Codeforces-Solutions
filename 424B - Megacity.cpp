#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n,s;
    cin>>n>>s;
    ll sum=s;
    vector<pair<double,int>>vec(n);
    int c;
    double a,b,d;
    for (int i = 0; i < n; ++i) {
        cin>>a>>b>>c;
        d=sqrt(pow(a,2)+pow(b,2));
        vec[i].first=d;
        vec[i].second=c;
        sum+=c;

    }
    if(sum<1e6)
    {
        cout<<-1;
        return 0;
    }
    sum=1e6-s;
    ll tot=0;
    sort(vec.begin(),vec.end());
    for (auto i:vec) {
        tot+=i.second;
        if (tot>=sum) {
            cout << fixed<<setprecision(10)<<i.first;
            break;
        }
    }
    return 0;
}
