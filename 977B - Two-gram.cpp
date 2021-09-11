#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N]={0},b[N]={0};

using namespace std;


int main() {

    IO;
    int n,cnt,mx=-1;
    string s,str="",str2="";
    map<string,int>mp;
    cin>>n>>s;
    for (int i = 0; i < s.size()-1; ++i) {
        cnt=1;
        str="";
        str+=s[i];
        str+=s[i+1];
        mp[str];
        for (int j = i+1; j < s.size()-1; ++j) {
            str2="";
            str2+=s[j];
            str2+=s[j+1];
            if(str2==str)
            {
                mp[str]++;
            }
        }
        mx=max(mx,mp[str]);
    }
    for(auto i: mp)
    {
        //cout<<i.first<<" "<<i.second<<endl;
           if(i.second==mx)
            {
                cout<<i.first;
                return 0;
            }
    }
    return 0;
}
