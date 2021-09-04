#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    string s,str;
    cin>>s>>str;
    map<char,int>have,need;

    for (int i = 0; i < s.size(); ++i) {
        have[s[i]]++;
    }
    for (int i = 0; i < str.size(); ++i) {
        need[str[i]]++;
    }
    vector<int>vis(need.size(),0);
    int cnt=0,res=0;
    for (auto i:need) {
        for (auto j:have) {
            if(i.first==j.first) {
                ++cnt;
                res += min(i.second, j.second);
                break;
            }
        }
    }
    if(cnt!=need.size())
        cout<<-1;
    else
    cout<<res;

    return 0;
}
