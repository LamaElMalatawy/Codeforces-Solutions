#include <iostream>
#include <string>
using namespace std;

int main()
{
    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
    char x;
    cin>>x;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {

        for(int j=0; j<keyboard.size(); j++)
        {

            if(s[i]==keyboard[j])
            {

                if(x=='R')
                    cout<<keyboard[j-1];
                else
                    cout<<keyboard[j+1];
            }

        }
    }

    return 0;
}
