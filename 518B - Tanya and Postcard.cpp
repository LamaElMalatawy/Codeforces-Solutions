#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;

int main(){
    IO;
    string s,t;
    cin>>s>>t;
    for (int i = 0; i < s.size(); ++i) {
        ++a[s[i]];
    }
    for (int i = 0; i < t.size(); ++i) {
        ++b[t[i]];
    }

    int yay=0,whoops=0;
    for (int i = 65; i < 123; ++i) {
        if(a[i]<=b[i] && a[i])
        {
            yay+=a[i];
            b[i]-=a[i];
            a[i]=0;
        }else if(a[i]>b[i] && b[i])
        {
            yay+=b[i];
            a[i]-=b[i];
            b[i]=0;
        }
    }
    /*cout<<endl;
    for (int i = 65; i < 123; ++i) {
        cout<<b[i]<<" ";
    }cout<<endl;*/

    for (int i = 65; i < 123; ++i) {
        while (a[i]){
            if(b[i])
            {
                --a[i];
                --b[i];
                ++yay;
            }else if(i<91 && b[i+32]){
                --a[i];
                --b[i+32];
                ++whoops;
            }else if(i>96 && b[i-32]){
                --a[i];
                --b[i-32];
                ++whoops;
            } else
                break;
        }
    }
    cout<<yay<<" "<<whoops;
    return 0;
}
