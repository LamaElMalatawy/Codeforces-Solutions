#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)

using namespace std;

int main() {

    IO;
    int t;
    cin>>t;
    string s,ans;
    int res,cntR,cntS,cntP;
    while (t--){
        cin>>s;
        cntS=0,cntR=0,cntP=0;
        ans=" ";
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]=='R')
                ++cntR;
            else if(s[i]=='P')
                ++cntP;
            else
                ++cntS;
        }
        if(cntS==cntP && cntP==cntR)
            cout<<s<<'\n';
        else {
            res = max(cntR, max(cntP, cntS));
            if (res == cntR)
                ans = string(s.size(), 'P');
            else if (res == cntP)
                ans = string(s.size(), 'S');
            else if (res == cntS)
                ans = string(s.size(), 'R');

            cout << ans << '\n';
        }
    }
    return 0;
}
