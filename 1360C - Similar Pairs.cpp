#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;


    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> vec(n);
        int odd = 0, even = 0;
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
            if (vec[i] & 1)
                odd++;
            else
                even++;
        }
        if (((even & 1) && (odd % 2 == 0)) || ((odd & 1) && (even % 2 == 0)))
            cout << "NO\n";
        else {
            if (even % 2 == 0 && odd % 2 == 0)cout << "YES\n";
            else {
                bool flag=false;
                sort(vec.begin(), vec.end());
                for (int i = 0; i < n - 1; ++i) {
                    if (abs(vec[i] - vec[i + 1]) == 1) {
                        cout << "YES\n";
                        flag=true;
                        break;
                    }

                }
                if(!flag)cout<<"NO\n";
            }

        }
    }


    return 0;
}