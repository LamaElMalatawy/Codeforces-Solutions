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
    vector<string>vec(n),dup(n);
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
        dup[i]=vec[i];
    }
    int cnt,ans=1e6,cnt2;
    for (int i = 0; i < n; ++i) {
        cnt=0,cnt2=0;
        for (int j = 0; j < n; ++j) {
            if (i == j || vec[i] == vec[j]) {
                cnt2++;
                continue;
            }
            for (int k = 0; k < vec[i].size(); ++k) {
                vec[j] += vec[j][0];
                vec[j].erase(0, 1);
                cnt++;
                if (vec[j] == vec[i]) {
                    cnt2++;
                    break;
                }

            }

            vec[j] = dup[j];
        }
        if(cnt2==n)
        ans=min(ans,cnt);
        else
            ans=-1;
    }
    cout<<ans;
    return 0;
}
