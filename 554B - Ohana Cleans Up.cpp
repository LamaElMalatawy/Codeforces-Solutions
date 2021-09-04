#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n;
    cin>>n;
    string s;
    vector<string>vec(n);
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
    }
    int cnt,res=0;
    for (int i = 0; i < n; ++i) {
        cnt=1;
        for (int j = 0; j < n; ++j) {
            if(i==j)
                continue;
            else
                if(vec[i]==vec[j])
                    cnt++;
        }
        res=max(res,cnt);
    }
    cout<<res;
    return 0;
}
