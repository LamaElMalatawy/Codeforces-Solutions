#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,ans;
    cin>>s;
    int len=s.size();
    if(len==1)
    {
        cout<<s;
        return 0;
    }
    if(len%2==0)
    {
        for(int i=len/2-1; i>=0; i--)
        {
            ans.push_back(s[i]);
            ans.push_back(s[len-1-i]);
        }
    }
    else
    {
        ans.push_back(s[len/2]);
        for(int i=len/2-1; i>=0; i--)
        {
            ans.push_back(s[len-1-i]);
            ans.push_back(s[i]);
        }

    }
    for(int i=0; i<len; i++)
        cout<<ans[i];

    return 0;
}
