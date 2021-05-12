#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,cnt=0,check=0;
    string s;
    vector<int>v;
    cin>>k>>s;
    sort(s.begin(),s.begin()+s.size());
    for(int i=0;i<s.size();i++)
    { cnt=0;
        for(int j=0;j<s.size();j++)
        {
            if(j<i && s[i]==s[j])
                break;
            if(s[i]==s[j])
                cnt++;
            if(j==s.size()-1)
              v.push_back(cnt);
        }

    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%k==0)
            check++;
    }
    if(check==v.size())
    {
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<s.size();j+=k)
                cout<<s[j];
        }
    }
    else
        cout<<-1<<endl;
    return 0;
}
