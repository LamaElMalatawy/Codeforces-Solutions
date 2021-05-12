#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,min,max;
    long long dif;
    cin>>n;
    vector<long long>c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    sort(c.begin(),c.end());
    min=c[0],max=c[n-1];
    dif=max-min-n;
    cout<<dif+1;
    return 0;
}
