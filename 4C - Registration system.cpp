#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    map<string,int>db;
    map<string,int>::iterator it;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin >> s;
            if (db.find(s) == db.end()) {
                cout << "OK" << '\n';
                db.insert({s, 0});
            } else {
                it = db.find(s);
                it->second++;
                cout << s << it->second << '\n';
            }


    }
    return 0;
}
