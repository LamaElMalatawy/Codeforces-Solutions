#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll int n,avg,r,res=0, total = 0,ans;
    cin >> n >> r >> avg;
    vector<pair<int, int>> grades(n);
    for (int i = 0; i < n; i++) {
        cin >> grades[i].second >> grades[i].first;
        total += grades[i].second;
    }
    /*ans = (double) total / n;
    if (ans <= r) {
        cout << 0;
        return 0;
    }*/
    sort(grades.begin(), grades.end());
    for (auto i:grades)
    {
        if(total>=avg*n)
            break;
        ans=min(avg*n-total,r-i.second);
        res+=ans*i.first;
        total+=ans;

    }
    cout<<res;
    return 0;
}
