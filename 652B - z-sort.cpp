#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {

    int n;
    cin >> n;
    deque<ll> dq(n);
    for (int i = 0; i < n; ++i) {
        cin >> dq[i];
    }
    sort(dq.begin(), dq.end());
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            cout << dq.front()<<" ";
            dq.pop_front();
        }else{
            cout<<dq.back()<<" ";
            dq.pop_back();
        }
    }
    return 0;
}
