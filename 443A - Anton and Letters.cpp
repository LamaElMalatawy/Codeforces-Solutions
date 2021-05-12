#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    set<char>dist;
    set<char>::iterator it;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{' || s[i]==',' || s[i]=='}' ||s[i]==' ')
            continue;
        dist.insert(s[i]);
    }

    cout<<dist.size();

    return 0;
}
