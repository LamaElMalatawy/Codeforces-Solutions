#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int t;
    cin>>t;
    string s;
    while (t--){
        cin>>s;
        int cnt=0,cnt2=0;
        map<char,int>mp;
        for (int i = 0; i < s.size(); ++i) {
            mp[s[i]]++;
        }
        for (auto i:mp) {
            if(i.second>=2)
            cnt++;
            else
                cnt2++;
        }
        if(cnt2&1)
            cnt+=(cnt2-1)/2;
        else
            cnt+=(cnt2/2);
        cout<<cnt<<endl;
    }

    return 0;
}
