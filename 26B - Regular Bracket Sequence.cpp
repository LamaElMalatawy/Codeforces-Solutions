#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;

int main(){
    IO;
    string s;
    cin>>s;
    stack<char>st;
    int cnt=0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='(') {
            st.push('(');
            cnt++;
        }
        else if(s[i]==')' &&!st.empty())
            st.pop();
    }
    cout<<(cnt-st.size())*2;
    return 0;
}
