#include <bits/stdc++.h>
 
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
 
const int N=1e6+5;
 
ll a[N],b[N]={0};
 
 
using namespace std;
 
int main() {
 
    IO;
    int n;
    cin >> n;
    vector<pair<ll, ll>> p(n);
    ll w, h;
    for (int i = 0; i < n; ++i) {
        cin >> w >> h;
        p[i].first = w;
        p[i].second = h;
    }
    bool flag = false;
    p[0].second=max(p[0].first,p[0].second);
    for (int i = 1; i < n ; ++i) {
        if (max(p[i].second, p[i].first) <= p[i - 1].second) {
            p[i].second = max(p[i].second, p[i].first);
            p[i].first = min(p[i].second, p[i].first);
        }
        else if (min(p[i].second, p[i].first) <= p[i - 1].second) {
            p[i].second = min(p[i].second, p[i].first);
            p[i].first = max(p[i].second, p[i].first);
        }
        else if(p[i].second>p[i-1].second)  {
            flag = true;
            break;
        }
    }
 
    if(flag)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
