#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> dis(n + 1);
    vector<ll> cost(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> dis[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    dis[n] = 0;
    cost[n] = 0;

    ll res=1e12;
    for (int j = 0; j < n; j++) {
        ll mini1 = 1e12, mini2 = 1e12;
        for (int i = j - 1; i >= 0; i--) {
            if (dis[i] < dis[j])
                mini1 = min(mini1, cost[i]);
        }
        for (int k = j + 1; k < n; k++) {
            if (dis[k] > dis[j])
                mini2 = min(mini2, cost[k]);
        }
        ll ans = mini1 + mini2 + cost[j];
        res = min(res, ans);
    }
    if (res == 1e12)
        cout << -1;
    else
        cout << res;
    return 0;
}
