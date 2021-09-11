#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N]={0},b[N]={0};

using namespace std;


int main() {

    IO;
    int n,prev,x,cnt=0;
    cin>>n;
    vector<int>diff(N);
    map<int,int>mp;

    for (int i = 1; i <= n; ++i) {
        cin>>x;
        ++a[x];
        if(!mp[x])
            mp[x]=i;
        else if(mp[x]>0) {
            if (a[x] == 2) {
                diff[x] = i - mp[x];
                mp[x] = i;
            } else if (a[x] > 2) {
                prev = i - mp[x];
                if (prev != diff[x]) {
                    mp[x] = -1;
                    --cnt;
                }
                else
                    mp[x] = i;
            }
        }
    }


    cout<<(mp.size()+cnt)<<endl;
    for (auto i: mp) {
        if(mp[i.first]!=-1) {
            if (a[i.first] == 1)
                cout << i.first << " " << 0 << endl;
            else
                cout << i.first << " " << diff[i.first] << endl;
        }
    }

    return 0;
}
