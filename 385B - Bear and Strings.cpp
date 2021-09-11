#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};


using namespace std;



int main() {


    IO;
    string s;
    int cnt=0;
    cin>>s;
    if(s.size()<4)
    {
        cout<<0;
        return 0;
    }
    for (int i = 0; i < s.size()-3; i++) {
        for (int j = i; j < s.size()-3; ++j) {
            if ((s[j] == 'b') && (s[j + 1] == 'e') && (s[j + 2] == 'a') && (s[j + 3] == 'r')) {
                cnt += (s.size() - j - 3);
                break;
            }

        }


    }
    cout<<cnt;
    return 0;
}
