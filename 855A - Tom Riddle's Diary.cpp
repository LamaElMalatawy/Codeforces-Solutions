#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    int n;
    cin>>n;
    set<string>s;
    string name;
    s.insert(" ");
    while (n--){
        cin>>name;
        auto it = s.find(name);
        if(it==s.end())
        {
            cout<<"NO"<<'\n';
            s.insert(name);
        }
        else
            cout<<"YES"<<'\n';


    }
    return 0;
}
