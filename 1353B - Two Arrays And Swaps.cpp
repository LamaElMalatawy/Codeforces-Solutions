#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> a(n), b(n);
        long long sum=0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        for (int i = 0; i < n; i++) {
            if(k==0)
                break;
            if (a[i] < b[i]) {
                swap(a[i], b[i]);
                --k;
            }

        }
        for(auto i:a)
            sum+=i;
        cout<<sum<<'\n';
    }
    return 0;
}
