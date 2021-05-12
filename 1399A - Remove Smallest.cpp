#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int t, n, a;
    bool flag;
    vector<int> vec;

    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        flag=true;
        for(int i=0;i<n-1;i++)
        {
            flag&=(vec[i+1]-vec[i]<=1);
        }
        if(flag)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
        vec.clear();
    }
    return 0;
}
