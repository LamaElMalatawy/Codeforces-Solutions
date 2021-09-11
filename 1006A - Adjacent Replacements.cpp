#include <bits/stdc++.h>
using namespace std;
long long const int N=1e5;
int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int j=0;j<v.size();j++){
        if(v[j]&1){
            v[j]++;
        }
    }
    for(int j=0;j<v.size();j++){
        if(v[j]%2==0)
            v[j]--;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
