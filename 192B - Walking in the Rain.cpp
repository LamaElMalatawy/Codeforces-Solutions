#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

//const int N=1e6+5;

//ll a[N],b[N]={0};


using namespace std;

int main() {

    IO;
    int n,maxD=-1;
    cin>>n;
    vector<int>vec(n);
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
        maxD=max(maxD,vec[i]);
    }
    if(n==1)
    {
        cout<<vec[0];
        return 0;
    }

    int cnt=0;
    bool flag=false;
    for (int i = 0; i < maxD; ++i) {
        for (int j = 0; j < n; ++j) {
            vec[j]--;
            if ((j == 0 && vec[0] < 0) || (j == n - 1 && vec[n - 1] < 0)) {
                flag = true;
                break;
            }
            if (vec[j] < 0) {
                if (vec[j + 1] < 0 || vec[j - 1] < 0) {
                    flag = true;
                    break;
                }
            }

        }
        if(flag)
            break;
        cnt++;

    }
    cout<<cnt;

    return 0;
}
