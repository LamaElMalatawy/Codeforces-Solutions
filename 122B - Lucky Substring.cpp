#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N];


using namespace std;

int main() {

    IO;
    string s;
    cin>>s;
    int cnt4=0,cnt7=0,l4=s.size(),l7=s.size();
    bool flag=false;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]-'0'==4)
            ++cnt4;

        else if(s[i]-'0'==7)
            ++cnt7;
    }
    if(cnt4>=cnt7) {
        if(cnt4==0)
            cout<<-1;
        else
        cout << 4;
    }
    else if(cnt4<cnt7)
        cout<<7;


    return 0;
}
