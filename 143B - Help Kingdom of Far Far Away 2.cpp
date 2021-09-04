#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

double a[N]={0},b[N]={0};


using namespace std;

int main() {

    IO;
    string s;
    cin>>s;
    bool flag= false;
    if(s[0]=='-') {
        flag= true;
        s.erase(0,1);
    }
    string str1="";
    int pos=s.size();
    for (int i = s.size(); i >=0 ; --i) {
        if(s[i]=='.'){
            pos=i;
            break;
        }
    }
    if(pos==s.size())
    {
        str1=".00";
    }
    else
    {
        for (int i = pos; i < s.size(); ++i) {
            if(pos+2>=i)
                str1+=s[i];
            else
                break;
        }
        if (str1.size()==2)
            str1+='0';
    }

    s.erase(pos,(s.size()-pos));

    for (int i = s.size()-3; i >=1 ; i-=3) {
        s.insert(i,",");
    }

    if(flag) {
        cout <<'(' <<'$'<<s<<str1<<')';

    }
    else{
        cout << '$'<<s<<str1; ;

    }
    return 0;
}
