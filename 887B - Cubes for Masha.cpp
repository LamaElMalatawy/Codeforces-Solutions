#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
//#define loop(i,a,b) for(int i=a;i<b;i++)
//#define rloop(i,a,b) for(int i=a-1;i>=b;i--)

const int N=1e6+5;

ll a[3][18]={0},freq[999]={0};

using namespace std;

int main(){

    IO;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <6; ++j) {
            cin >> a[i][j];
            ++freq[a[i][j]];
        }
    }

    int x;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            for (int k = 0; k < 6; ++k) {
                for (int l = 0; l < 6; ++l) {
                    x=a[i][l]*10+a[j][k];
                    freq[x]=1;
                    x=a[j][l]*10+a[i][k];
                    freq[x]=1;
                }
            }
        }
    }
    for (int i = 1; i < 100; ++i) {
        if(freq[i]==0) {
            cout << i - 1;
            break;
        }

    }
    return 0;
}
