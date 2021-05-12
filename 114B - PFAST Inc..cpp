#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    string a, b;
    cin >> n >> m;
    bool no[20][20] = {};
    map<string, int> idx;
    vector<string> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        idx[vec[i]] = i;
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        no[idx[a]][idx[b]] = true;
        no[idx[b]][idx[a]] = true;
    }
    vector<string> ans;
    for (int msk = 0; msk < (1 << n); msk++) {
        vector<string> subset;
        for (int i = 0; i < n; i++) {
            if (msk & (1 << i)) {
                subset.push_back(vec[i]);
            }
        }
        bool invalid = false;
        for (auto x:subset) {
            for (auto y:subset) {
                if (no[idx[x]][idx[y]]) {
                    invalid = true;
                    break;
                }
            }
            if (invalid)break;
        }
        if (!invalid) {
            if (ans.size() < subset.size())
                ans = subset;
        }
    }
    cout<<ans.size()<<'\n';
    sort(ans.begin(),ans.end());
    for(auto i:ans)
        cout<<i<<'\n';

    return 0;
}
