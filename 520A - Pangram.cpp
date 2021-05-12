#include <iostream>

using namespace std;

int main()
{
    char alpha[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    bool visited[26]={false};
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    if(n<26)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
        for(int j=0;j<26;j++)
        {
            if(s[i]==alpha[j]&&visited[j]==false)
                {visited[j]=true;
                break;}
        }

    }
    for(int i=0;i<26;i++)
    {
        if(visited[i]==true)
            cnt++;
    }
    if(cnt==26)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
