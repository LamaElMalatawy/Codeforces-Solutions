#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, lvl, ans;
    long long w;
    cin >> t;
    while (t--) {
        cin >> n >> w;
        vector<int> wdth(n);
        vector<int>::iterator it;
        for (int i = 0; i < n; i++)
            cin >> wdth[i];
        sort(wdth.begin(), wdth.end());
        ans = 1;
        lvl = w;
        while (!wdth.empty()) {
            it = upper_bound(wdth.begin(), wdth.end(), lvl);
            if (it == wdth.begin()) {
                lvl = w;
                ans++;
            } else {
                --it;
                lvl -= *it;
                wdth.erase(it);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
