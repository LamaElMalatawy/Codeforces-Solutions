#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

double a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for (int i = 0; i < t; ++i) {
        for (int j = 1; j < n; ++j) {
            if (s[j] == 'G' && s[j - 1] == 'B')
            {
                s[j]='B';
                s[j-1]='G';
                ++j;
            }
        }
    }
    cout<<s;
    return 0;
}
