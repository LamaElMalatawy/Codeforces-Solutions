#include <bits/stdc++.h>
 
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
 
const int N=1e6+5;
 
ll a[N],b[N]={0};
 
 
using namespace std;
 
int main() {
 
    IO;
 
    int n,x;
    cin>>n;
    vector<int>vec;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        if(x==1)
            vec.push_back(i);
    }
 
    if(vec.empty())
    {
        cout<<0;
        return 0;
    }
    int cnt=1;
    for (int i = 0; i < vec.size()-1; ++i) {
        if(vec[i+1]-vec[i]>2)
            cnt+=2;
        else
            cnt+=(vec[i+1]-vec[i]);
 
    }
    cout<<cnt;
 
    return 0;
}
