#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool flag = false;
    int n,a,b,cnt=0;
    cin>>n;
    pair<int,int>p[n];
    for(int i=0;i<n;i++)
    {
      cin>>a>>b;
      p[i].first=a;
      p[i].second=b;

    }
    for(int i=0;i<n;i++)
    {

      if(p[i].first==p[i].second)
        cnt++;

    }
    if(cnt<n)
    {
        cout<<"rated";
        return 0;
    }
    for(int i=0;i<n;i++)
    {

      for(int j=0;j<n;j++)
      {
          if(p[i].first<p[j].first)
            {
                if(i<j)
                    flag=true;
            }
      }

    }
    if(flag)
        cout<<"unrated";
    else
        cout<<"maybe";
    return 0;
}
