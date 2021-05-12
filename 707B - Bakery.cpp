#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,k,a;
    long long mini=1000000005,ans=1000000005;
    cin>>n>>m>>k;
    long long u[m],v[m],l[m];
    bool visited[n+1]={false},found=false;
    for(int i=0;i<m;i++)
        cin>>u[i]>>v[i]>>l[i];
    if(k==0)
    {
        cout<<"-1";
        return 0;
    }
    else
    {
        while(k--)
        {
            cin>>a;
            visited[a]=true;
        }
        for(int i=0;i<m;i++)
        {
            if((visited[u[i]]&&!visited[v[i]]) || (!visited[u[i]]&&visited[v[i]]))
        {
            mini=l[i];
            found=true;
        }
        ans=min(ans,mini);
        }
        if(!found)
            ans=-1;
        cout<<ans;
    }


    return 0;
}
