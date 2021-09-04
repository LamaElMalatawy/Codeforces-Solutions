#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

//ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>a,b;
    for (int i = 0; i < n; ++i) {
        a.push_back(s[i]-'0');
    }
    sort(a.begin(),a.end());
    for (int i = n; i < 2*n; ++i) {
        b.push_back(s[i]-'0');
    }
    sort(b.begin(),b.end());
    bool flag1=true,flag2=true;
    for (int i = 0; i < n; ++i) {
        if(a[i]>b[i])
            continue;
        else
        {
            flag1= false;
            break;
        }
    }
    for (int i = 0; i < n; ++i) {
        if(a[i]<b[i])
            continue;
        else
        {
            flag2= false;
            break;
        }
    }
    if(flag1==flag2)
        cout<<"NO";
    else
        if(flag1 || flag2)
            cout<<"YES";
    return 0;
}
