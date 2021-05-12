#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n,x,y,v;
    double ans=100000,dist,time;
    cin>>a>>b>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>v;
        dist=sqrt(pow((a-x),2)+pow((b-y),2));
        time=dist/v;
        ans=min(ans,time);
    }
    cout<<fixed<<setprecision(20)<<ans<<endl;
    return 0;
}
