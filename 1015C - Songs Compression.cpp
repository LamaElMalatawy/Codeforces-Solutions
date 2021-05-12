#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, cnt = 0;
    ll m, a, b;
    ll int sumA = 0, sumB = 0;
    cin >> n >> m;
    vector<pair<ll, ll>> songs(n);
    vector<ll>diff(n);
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        songs[i].first = a;
        songs[i].second = b;
        sumA += a;
        sumB += b;

        diff[i]=(a-b);

    }

    sort(diff.rbegin(),diff.rend());
    //cout << sumA << endl;
    if (sumA <= m) {
        cout << "0" << '\n';
        return 0;
    }
    if (sumB > m) {
        cout << "-1" << '\n';
        return 0;
    }
    //sort(songs.rbegin(), songs.rend());
    for(int i=0;i<n;++i)
    {   sumA -= diff[i];
        cnt++;
        if (sumA <= m)
            break;
    }

    cout <<cnt;
    return 0;
}
