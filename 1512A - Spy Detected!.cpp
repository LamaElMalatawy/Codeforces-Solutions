#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
 
int main() {
 
 
int n,x;
cin>>x;
    while (x--) {
        cin >> n;
        vector<int> vec;
        map<int, int> freq;
 
        for (int i = 0; i < n; i++) {
            cin >> x;
            vec.push_back(x);
        }
        for (auto v:vec)
            freq[v]++;
 
        for (auto const &p: freq) {
            if (p.second == 1) { for(int i=0;i<n;i++){
                if(vec[i]==p.first) {
                    cout << i + 1 << '\n';
                    break;
                }
            } }
        }
        freq.clear();
        vec.clear();
    }
    return 0;
}