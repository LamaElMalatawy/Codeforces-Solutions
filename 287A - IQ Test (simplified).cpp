#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)

using namespace std;

int main() {

    IO;

    char arr[6][6] = {'-'};
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= 4; ++j) {
            cin >> arr[i][j];
        }
    }
    int cnt;
    bool flag = false;
    for (int i = 1; i <= 4; ++i) {

        for (int j = 1; j <= 4; ++j) {
            cnt = 0;
            if (arr[i][j] == '#') {
                if (arr[i - 1][j] == '#' || arr[i + 1][j] == '#')
                    ++cnt;
                if (arr[i][j - 1] == '#' || arr[i][j + 1] == '#')
                    ++cnt;

            }
            else{
                if (arr[i - 1][j] == '.' || arr[i + 1][j] == '.')
                    ++cnt;
                if (arr[i][j - 1] == '.' || arr[i][j + 1] == '.')
                    ++cnt;

            }
            if (cnt >= 2) {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
