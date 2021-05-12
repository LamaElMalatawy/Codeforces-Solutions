#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
    string s,a;
    vector<char>v1;
    vector<int>v2;
    int m;
    cin>>s;
    if(s.size()==1)
        cout<<s;
    else
    {

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='+')
                v1.push_back(s[i]);
            else
            {
                a=s[i];
                m=stoi(a);
                v2.push_back(m);
            }
        }
        sort(v2.begin(),v2.end());
        for(int i=0; i<v1.size(); i++)
        {
            cout<<v2[i]<<v1[i];
        }
        cout<<v2[v2.size()-1];
    }
    return 0;
}
