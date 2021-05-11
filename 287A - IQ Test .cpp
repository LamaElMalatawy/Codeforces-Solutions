#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

using namespace std;

int main() {

    IO;
    char arr[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];

        }
    }
    bool flag = false;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == '#') {

                if (arr[i][j + 1] == '#')
                    ++cnt1;
                if (arr[i + 1][j] == '#')
                    ++cnt1;
                if (arr[i + 1][j + 1] == '#')
                    ++cnt1;

            } else {
                if (arr[i][j + 1] == '.')
                    ++cnt2;
                if (arr[i + 1][j] == '.')
                    ++cnt2;
                if (arr[i + 1][j + 1] == '.')
                    ++cnt2;
            }

            if (cnt1 >= 2 || cnt2 >= 2) {
                cout << "YES";
                return 0;


            }
            cnt1 = 0;
            cnt2 = 0;
        }
    }

    if (arr[3][3] == '#') {
        if (arr[3][2] == '#' && (arr[2][3] == '#' || arr[2][2] == '#'))
            flag = true;
    } else {

        if (arr[3][2] == '.' && (arr[2][3] == '.' || arr[2][2] == '.'))
            flag = true;

    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}