#include <bits/stdc++.h>


using namespace std;
int mat[505][505];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> primes;
    for (int i = 2; i <2e5; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }

        }
        if (isPrime)
            primes.push_back(i);
    }

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    int res = 1e9;
    for (int i = 0; i < n; i++) {
        int curRow = 0;
        for (int j = 0; j < m; j++) {
            auto it = lower_bound(primes.begin(), primes.end(), mat[i][j]);
            curRow += (*it - mat[i][j]);

        }
        res = min(res, curRow);
    }
    for (int i = 0; i < m; i++) {
        int curCol = 0;
        for (int j = 0; j < n; j++) {
            auto it = lower_bound(primes.begin(), primes.end(), mat[j][i]);
            curCol += (*it - mat[j][i]);
        }

        res = min(res, curCol);
    }
    cout <<res<<'\n';
    return 0;

}
