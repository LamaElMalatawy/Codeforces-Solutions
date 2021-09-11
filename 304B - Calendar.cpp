#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

//ll a[N]={0},b[N]={0};

using namespace std;



int main() {

    IO;

    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};

    string s,e;
    cin>>s>>e;
    int sy=0,ey=0,sm=0,em=0,sd=0,ed=0;
    for (int i = 0; i < 4; ++i) {
        sy=sy*10+(s[i]-'0');
        ey=ey*10+(e[i]-'0');
    }


    for (int i = 5; i < 7; ++i) {
        sm=sm*10+(s[i]-'0');
        em=em*10+(e[i]-'0');
    }
    for (int i = 8; i < 10; ++i) {
        sd=sd*10+(s[i]-'0');
        ed=ed*10+(e[i]-'0');
    }
    if(sy>ey)
    {
        swap(sy,ey);
        swap(sd,ed);
        swap(sm,em);
    }
    ll ans=0;
    for (int i = sy; i < ey; ++i) {
        if(((i%4==0) && (i%100))||(i%400==0))
            ans+=366;
        else
            ans+=365;
    }

    ans-=sd;
    ans+=ed;

    --sm;
    --em;

    bool flage=false,flags=false;
    if(((ey%4==0) && (ey%100))||(ey%400==0))
        flage = true;
    if(((sy%4==0) && (sy%100))||(sy%400==0))
        flags= true;

    if(flags)
    for (int i = 0; i < sm; ++i) {
        ans-=b[i];
    }
    else {
        for (int i = 0; i < sm; ++i) {
            ans -= a[i];
        }
    }
    if(flage)
        for (int i = 0; i < em; ++i) {
            ans+=b[i];
        }
    else
        for (int i = 0; i < em; ++i) {
            ans+=a[i];
        }

        cout<<abs(ans);

    return 0;
}
