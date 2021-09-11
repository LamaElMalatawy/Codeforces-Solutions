#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

//ll a[N]={0},b[N]={0};

using namespace std;



int main() {

    IO;
    int t,n;
    cin>>t;
   string s,str;
    while (t--){
        cin>>n;
        cin>>s>>str;
        vector<int>b(n,0);
        int cnt=0;
        for (int i = 0; i < str.size(); ++i) {
            if(i==0)
            {
                if(str[i]=='1') {
                    if (s[i] == '0' && b[i] == 0) {
                        b[i] = 1;
                        cnt++;
                    } else if (s[i + 1] == '1' && b[i + 1] == 0) {
                        b[i + 1]=1;
                        cnt++;
                    }

                }
            }else if(i==(str.size()-1))
            {
                if(str[i]=='1') {
                    if (s[i] == '0' && b[i] == 0) {
                        b[i] = 1;
                        cnt++;
                    } else if (s[i - 1] == '1' && b[i - 1] == 0) {
                        b[i - 1] = 1;
                        cnt++;
                    }
                }
            }
            else {
                if (str[i] == '1') {
                    if (s[i] == '0' && b[i] == 0) {
                        b[i] = 1;
                        cnt++;
                    } else if (s[i - 1] == '1' && b[i-1] == 0) {
                        b[i-1]=1;
                        cnt++;
                    }
                    else if(s[i + 1] == '1' && b[i + 1] == 0) {
                        b[i+1]=1;
                        cnt++;
                    }
                }
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
