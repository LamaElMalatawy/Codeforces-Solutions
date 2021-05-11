#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    ll int diff = 0;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (vec[i] >= diff) {
            cnt++;
            diff += vec[i];
        }
    }
    cout << cnt;
    return 0;
}