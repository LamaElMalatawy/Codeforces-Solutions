#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

//ll a[N],b[N]={0};


using namespace std;

int main() {

    IO;

    char a[27],b[27];
    for (int i = 0; i < 26; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < 26; ++i) {
        cin>>b[i];
    }
    string s,str="";
    cin>>s;
    bool isUpp=false;
    for (int i = 0; i < s.size(); ++i) {
        if(isdigit(s[i]))
        {
            str+=s[i];

        }
        else {
            if (isupper(s[i])) {
                isUpp = true;
                s[i] = tolower(s[i]);
            }
            for (int j = 0; j < 26; ++j) {
                if (s[i] == a[j]) {
                    if (isUpp) {
                        str += toupper(b[j]);
                        isUpp = false;
                        break;
                    } else {
                        str += b[j];
                        break;
                    }
                }
            }
        }
    }
    cout<<str;
    return 0;
}
