#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,ans=0;
    string s;
    cin>>n>>s;
    if(n>26)
        cout<<"-1"<<endl;
    else
    {

        set<char>ch;
        for(int i=0; i<n; i++)
        {
            ch.insert(s[i]);
        }
        ans=n-ch.size();

        cout<<ans<<endl;
    }
    return 0;
}
