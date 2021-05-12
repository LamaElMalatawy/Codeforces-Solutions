#include <bits/stdc++.h>

using namespace std;

struct days{
    char type;
    int a;
    int b;
};

int main() {


    char type;
    int t, a, b;
    cin >> t;
    days d[5005];
    int ans = 0, val;
    for (int i = 0; i < t; i++) {
        cin >> type >> a >> b;
        d[i].type = type;
        d[i].a = a;
        d[i].b = b;
    }


    for (int i = 1; i <= 366; ++i) {
        int cntM = 0, cntF = 0;
        for (int j = 0; j < t; j++) {
            if (d[j].a <= i && d[j].b >= i) {
                if (d[j].type == 'F')
                    cntF++;
                else
                    cntM++;
            }
        }

        val = 2 * min(cntF, cntM);
        ans = max(ans, val);
    }

        cout<<ans;
        return 0;
}
