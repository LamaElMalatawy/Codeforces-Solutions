#include <bits/stdc++.h>
 
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;
 
 
int main() {
 
    IO;
 
    ll sum = 0;
    int n;
    cin >> n;
    vector<int> vec(n);
    int minO = 1e5, maxO = -1e5;
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        if (vec[i] > 0)
            sum += vec[i];
        if (vec[i] & 1 && vec[i] > 0)
            minO = min(minO, vec[i]);
        if (vec[i] & 1 && vec[i] < 0)
            maxO = max(maxO, vec[i]);
    }
 
    if (sum % 2 == 0) {
        int x = min(minO, -maxO);
        sum -= x;
    }
    cout << sum;
 
    return 0;
}
