#include <bits/stdc++.h>
 
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
 
const int N=1e6+5;
 
ll a[N],b[N]={0};
 
 
using namespace std;
 
int main() {
 
    IO;
 
    int n;
    cin>>n;
    vector<int>s(n),r(n),h(n),c(n),out(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>s[i]>>r[i]>>h[i]>>c[i];
    }
 
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <n ; ++j) {
            if(i==j || out[j])
                continue;
            else if(s[i]>s[j] && r[i]>r[j] && h[i]>h[j])
                out[j]=1;
        }
 
    }
    int minC=1005,idx=-1;
    for (int i = 0; i < n; ++i) {
        if(out[i]==0)
        {
           minC=min(minC,c[i]);
        }
        if(minC==c[i])
            idx=i;
    }
    cout<<++idx;
    return 0;
}
