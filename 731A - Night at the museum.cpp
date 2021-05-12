#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int dist=0;
    vector<int>v;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<26;j++)
        {

        if(s[i]==alph[j])
        {
            v.push_back(j+1);
            break;
        }
        }

    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            dist+=min(abs(v[i]-v[j]),26-abs(v[j]-v[i]));
            break;
        }
        //cout<<v[i]<<" ";
    }
    dist+=min(abs(1-v[0]),26-abs(v[0]-1));
   cout<<dist;

    return 0;
}
