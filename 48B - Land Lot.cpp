#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;

int main() {


    IO;
    int n,m;
    cin>>n>>m;
    int arr[50][50];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>arr[i][j];
        }
    }

    int a,b,cnt=0,num=2501;
    cin>>a>>b;
    for (int i = 0; i < n-a+1; ++i) {
        for (int j = 0; j < m-b+1; ++j) {
            cnt=0;
            for (int k = i; k < i+a; ++k) {
                for (int l = j; l < j+b; ++l) {

                    if(arr[k][l]==1)
                        cnt++;
                }
            }
            num=min(cnt,num);
        }
    }
    for (int i = 0; i < n-b+1; ++i) {
        for (int j = 0; j < m-a+1; ++j) {
            cnt=0;
            for (int k = i; k < i+b; ++k) {
                for (int l = j; l < j+a; ++l) {
                  if(arr[k][l]==1)
                      cnt++;
                }
            }
            num=min(cnt,num);
        }
    }
    cout<<num;
    return 0;
}
