#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, x;
    set<int> s;

    cin >> n;
    while (n--) {
        cin >> x;
        s.insert(x);
    }
    if (s.size() == 1)
        cout << "NO";
    else
        cout << *(++s.begin());
    return 0;
}
