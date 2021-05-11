#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;


int main() {

    IO;

    string s,dup;
    cin>>s;
    map<char,int>count;
    for (int i = 0; i < s.size(); ++i) {
        count[s[i]]++;
    }
    bool flag= true;
    int cnt=0;
    for (auto i:count) {
        if(i.second&1) {
            flag = false;
            cnt++;
        }
    }if(flag)cout<<"First";
    else {
        if (cnt % 2)
            cout << "First";
        else cout << "Second";
    }

    return 0;
}