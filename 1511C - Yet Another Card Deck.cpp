#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;
    int n, q;
    cin >> n >> q;
    deque<int> dq(n);
    vector<int> qu(q),loc(q);
    for (int i = 0; i < n; ++i) {
        cin >> dq[i];
    }
    auto it = dq.begin();
    int m;
    for (int i = 0; i < q; ++i) {
        cin >> qu[i];
        it = find(dq.begin(), dq.end(), qu[i]);
        cout<<it-dq.begin()+1<<" ";
        m=qu[i];
        dq.erase(it);
        dq.push_front(m);

    }

    return 0;
}
