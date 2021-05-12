#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int n,m;
    cin>>n>>m;
    string first,second,lec[n],mini;
    pair<string,string> lang[m];
    for(int i=0;i<m;i++)
    {
        cin>>first>>second;
        lang[i].first=first;
        lang[i].second=second;
    }
    for(int j=0;j<n;j++)
    {
       cin>>lec[j];

        for(int i=0;i<m;i++)
        {
            if(lec[j]==lang[i].first)
            {
                if(lang[i].first.size()<=lang[i].second.size())
                    mini=lang[i].first;
                else
                    mini=lang[i].second;

            }
            

        }
        cout<<mini<<" ";
    }
 
    return 0;
}
