#include <iostream>

using namespace std;

int main()
{
    string s,t;
    int cnt=1;
    getline(cin,s);
    getline(cin,t);
    int i=0,j=0;
    while(i<s.size())
    {

        if(s[i]==t[j])
        {
            cnt++;
            i++;
        }
        j++;
        if(j==t.size())
            break;

    }
    cout<<cnt;
    return 0;
}
