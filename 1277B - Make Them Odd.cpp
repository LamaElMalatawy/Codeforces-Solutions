#include <iostream>
#include <set>

using namespace std;

int main() {

    int t,n,it;
    long long x,cnt=0;
    cin>>t;
    while(t--) {
        cin >> n;
        set<int> st;
        while (n--) {
            cin >> x;
            st.insert(x);
        }

        while (!st.empty()) {
            it = *(--st.end());
            st.erase(it);
            if (it % 2 == 0) {
                st.insert(it / 2);
                cnt++;
            }

        }
        cout << cnt << '\n';
        cnt=0;
        st.clear();
    }
    return 0;
}
