#include <iostream>


using namespace std;

int main() {


    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        bool first = true;
        char arr[400][400];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == '*' && first) {
                    first = false;
                    x1 = i, y1 = j;
                } else if (arr[i][j] == '*') {
                    x2 = i, y2 = j;
                }
            }
        }
        if (x1 == x2) {
            if (x2 != n - 1) {
                arr[x1 + 1][y1] = '*';
                arr[x2 + 1][y2] = '*';
            } else {
                arr[x1 - 1][y1] = '*';
                arr[x2 - 1][y2] = '*';
            }
        } else if (y1 == y2) {
            if (y2 != n - 1) {
                arr[x1][y1 + 1] = '*';
                arr[x2][y2 + 1] = '*';
            } else {
                arr[x1][y1 - 1] = '*';
                arr[x2][y2 - 1] = '*';
            }
        } else if (x1 == y2 && x2 == y2) {
            arr[x1][x1] = '*';
            arr[x2][x2] = '*';
        } else {
            if (y1 < y2) {
                arr[x1][y2] = '*';
                arr[x2][y1] = '*';
            } else {
                arr[x2][y1] = '*';
                arr[x1][y2]='*';
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j];
            }
            cout << '\n';
        }

    }

    return 0;
}