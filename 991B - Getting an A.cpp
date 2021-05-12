#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,cnt=0;
    double sum=0,avg=0;
    cin>>n;
    vector<int>vec(n);
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
        sum+=vec[i];
    }
    avg=sum/n;
    //cout<<avg;
    if(avg>=4.5) {
        cout << 0;
        return 0;
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i < n; ++i) {
        sum=sum-vec[i]+5;
        cnt++;
        if(sum>=4.5*n)
            break;
    }
    cout<<cnt;
    return 0;
}
