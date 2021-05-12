#include <bits/stdc++.h>

using namespace std;

void lettersFreq(string s)
{   vector<int>freq;
    bool visited[s.size()]={false};
    for(int i=0;i<s.size();i++)
    {
        if(visited[i]==true)
            continue;
        int counter=1;
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                visited[j]=true;
                counter++;
            }
        }
        freq.push_back(counter);
    }
    sort(freq.begin(),freq.end());
    if(freq[0]==1)
        cout<<"No";
    else
        cout<<"Yes";
}

int main()
{
    string s;
    cin>>s;
    if(s.size()<4)
    {
        cout<<"No";
        return 0;
    }
    int len=s.size(),cnt=0;
    sort(s.begin(),s.end());
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[i+1])
            cnt++;
    }
    if(cnt==1)
    {
        cout<<"No";
    }
    else if(cnt==2)
     lettersFreq(s);
    else if(cnt>4)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}
