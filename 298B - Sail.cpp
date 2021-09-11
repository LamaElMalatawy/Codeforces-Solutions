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
    ll sx,sy,ex,ey;
    cin>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    int ans=0;
    if(sx==ex)
    {
        if(sy>ey)
        {
            for (int i = 0; i < t; ++i) {
                if(s[i]=='S' && (sy!=ey))
                {
                    ans=i+1;
                    --sy;
                }
                if(sy==ey)
                    break;
            }
        }else{
            for (int i = 0; i < t; ++i) {
                if(s[i]=='N' && (sy!=ey))
                {
                    ans=i+1;
                    ++sy;
                }
                if(sy==ey)
                    break;
            }
        }
    }
    else if(sy==ey)
    {
        if(sx>ex)
        {
            for (int i = 0; i < t; ++i) {
                if(s[i]=='W' && (sx!=ex))
                {
                    ans=i+1;
                    --sx;
                }
                if(sx==ex)
                    break;
            }
        }else{
            for (int i = 0; i < t; ++i) {
                if(s[i]=='E'&& (sx!=ex))
                {
                    ans=i+1;
                    ++sx;
                }
                if(sx==ex)
                    break;
            }
        }
    }
    else if(sx<ex && sy<ey)
    {
        for (int i = 0; i < t; ++i) {
            if(s[i]=='N' && (sy!=ey))
            {
                ++sy;
                ans=i+1;
            }else if(s[i]=='E' && (sx!=ex))
            {
                ++sx;
                ans=i+1;
            }
            if(sx==ex && sy==ey)
                break;
        }
    }else if(sx<ex && sy>ey)
    {
        for (int i = 0; i < t; ++i) {
            if(s[i]=='S' && (sy!=ey))
            {
                --sy;
                ans=i+1;
            }else if(s[i]=='E' && (sx!=ex))
            {
                ++sx;
                ans=i+1;
            }
            if(sx==ex && sy==ey)
                break;
        }
    }else if(sx>ex && sy>ey)
    {
        for (int i = 0; i < t; ++i) {
            if(s[i]=='S' && (sy!=ey))
            {
                --sy;
                ans=i+1;
            }else if(s[i]=='W' && (sx!=ex))
            {
                --sx;
                ans=i+1;
            }
            if(sx==ex && sy==ey)
                break;
        }
    }
    else if(sx>ex && sy<ey)
    {
        for (int i = 0; i < t; ++i) {
            if(s[i]=='N' && (sy!=ey))
            {
                ++sy;
                ans=i+1;
            }else if(s[i]=='W' && (sx!=ex))
            {
                --sx;
                ans=i+1;
            }
            if(sx==ex && sy==ey)
                break;
        }
    }
    if(sx==ex && sy==ey)
        cout<<ans;
    else
        cout<<-1;
    return 0;
}
