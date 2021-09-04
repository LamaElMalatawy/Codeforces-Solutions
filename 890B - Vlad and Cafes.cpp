#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N];


using namespace std;

int main() {

    IO;
    int n;
    cin>>n;
    map<int,int>freq;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        ++freq[a[i]];
    }
    int cnt=freq.size();
    if(cnt==n)
    {
        cout<<a[0];
        return 0;
    }
    for (int i = n-1; i >=0 ; --i) {
        if(cnt==1 && freq[a[i]]) {
            cout << a[i];
            return 0;
        }
       else
        if (freq[a[i]])
        {
            freq[a[i]]=0;
            --cnt;
        }
    }

    return 0;
}
