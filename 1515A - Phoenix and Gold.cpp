
#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        vector<int> vec(n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
            sum += vec[i];
        }
        if (sum == x)
            cout << "NO\n";
        else {
            cout << "YES\n";
            int ans = 0;
            for (int i = 0; i < n; ++i) {
                if (vec[i] == x)
                    swap(vec[i], vec[i + 1]);
                cout << vec[i] << " ";
                x-=vec[i];
            }
            cout << '\n';
        }
    }
    return 0;
}
