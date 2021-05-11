#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;


    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> freq(5, 0);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        freq[vec[i]]++;
    }
    
    int ans = 0;
    float m;
    ans += freq[4];
    while (true) {
        if (freq[3] == 0 && freq[2] == 0 && freq[1] == 0)break;
        if (freq[3] > 0) {
            if (freq[1] > 0) {
                ans++;
                --freq[3], --freq[1];
            } else {
                ans++;
                --freq[3];
            }
        }
        if (freq[2] > 0) {
            if (freq[2] % 2 == 0) {
                ans += (freq[2] * 2) / 4;
                freq[2] = 0;
            } else {
                if (freq[2] != 1) {
                    ans += (freq[2] * 2) / 4;
                    freq[2] = 1;
                }
            }
        }
        if (freq[1] > 0 && freq[3] == 0) {
            if (freq[1] % 2 == 0) {
                freq[2] += (freq[1]/2);
                freq[1] = 0;
            } else {
                freq[2] += (freq[1] / 2);
                freq[1] -= ((freq[1] / 2) * 2);
            }
        }
       
        if ((freq[1] == 0 && freq[2] == 1 &&freq[3]==0) || (freq[1] == 1 && freq[2] == 0 && freq[3]==0) || (freq[1] == 1 && freq[2] == 1 && freq[3]==0)) {
            ++ans;
            freq[1] = 0;
            freq[2] = 0;
        }

        
    }


    cout << ans;
    return 0;
}