#include <bits/stdc++.h>
using namespace std;
long long const int N=1e5;
int main() {
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v;
    vector<int>r,f;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    sort(v.rbegin(),v.rend());
    int co=0;
    for(int i=0;i<k;i++) {
        co += v[i].first;
        r.push_back(v[i].second);
    }
    sort(r.begin(),r.end());
    /*for (int i = 0; i < r.size(); ++i) {
        cout<<r[i]<<" ";
    }*/
    cout<<co<<"\n";
    if(k==1)
        cout<<n;
    else {
        int prev;
        for (int i = 0; i < k - 1; i++) {
            if (i == 0) {
                prev=r[i];
                cout << r[i] << " "; }
            else {
                prev=r[i];
                cout << r[i] - r[i - 1] << " ";
            }
        }
        cout<<n-prev<<" ";
    }
}
