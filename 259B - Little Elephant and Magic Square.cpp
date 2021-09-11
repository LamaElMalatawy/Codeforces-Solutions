#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

//ll a[N]={0},b[N]={0};


using namespace std;



int main() {


    IO;
    int a[4][4];
    int total=0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin>>a[i][j];
            total+=a[i][j];
        }
    }
    total/=2;
    a[0][0]=total-a[0][1]-a[0][2];
    a[1][1]=total-a[1][0]-a[1][2];
    a[2][2]=total-a[2][0]-a[2][1];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
