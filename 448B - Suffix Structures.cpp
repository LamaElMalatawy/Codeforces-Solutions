#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
const ll N=1e6+5;
using namespace std;



//double a[N]={0},b[N]={0};


int main() {

    IO;

    string s,t;
    cin>>s>>t;
    map<char,int>tt,ss;

    for (int i = 0; i < t.size(); ++i) {
        ++tt[t[i]];
    }
    for (int i = 0; i < s.size(); ++i) {
        ++ss[s[i]];
    }

    if(tt==ss)
    {
        cout<<"array";
        return 0;
    }


    for (int i = 0; i < t.size(); ++i) {
        if(tt[t[i]]>ss[t[i]])
        {
            cout<<"need tree";
            return 0;
        }
    }

    int idx=0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]==t[idx])
        ++idx;
        if(idx==(t.size()-1))
        {
            cout<<"automaton";
            return 0;
        }
    }

    cout<<"both";




    return 0;
}
