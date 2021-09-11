#include <bits/stdc++.h>
using namespace std;
long long const int N=1e5;
#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)


ll a[N]={0},b[N]={0};

using namespace std;

int main(){

    int n;
    cin>>n;
    char arr [4] = {'a','b','c','d'};
    string s="";
    for (int i = 0; i < n; ++i) {
        s+=arr[i%4];
    }
    cout<<s;


    return 0;
}
