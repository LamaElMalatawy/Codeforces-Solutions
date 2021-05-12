#include <iostream>
#include<vector>
using namespace std;

int main()
{
    string s;
    bool flag = false;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
           {
           i+=2;
           if(flag)
            cout<<" ";
           continue;
           }
        flag = true;
        cout<<s[i];

    }
 


    return 0;
}
