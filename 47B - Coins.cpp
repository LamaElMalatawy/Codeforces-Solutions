#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N]={0},b[N]={0};

using namespace std;


int main() {

    IO;
    string s1,s2,s3,s="";
    map<char,int>mp;

    mp['A']=0;
    mp['B']=0;
    mp['C']=0;

    cin>>s1>>s2>>s3;
    if(s1[1]=='>')
        ++mp[s1[0]];
    else
        ++mp[s1[2]];
    if(s2[1]=='>')
        ++mp[s2[0]];
    else
        ++mp[s2[2]];
    if(s3[1]=='>')
        ++mp[s3[0]];
    else
        ++mp[s3[2]];
    int cnt=0,cnt1=0;
    while (cnt1<=3 && cnt<3){
    for (auto i:mp) {
        if (i.second == cnt) {
            s += i.first;
            ++cnt;
        }
    }
        ++cnt1;
    }
    if(s=="")
        cout<<"Impossible";
    else
    cout<<s;

    return 0;
}
