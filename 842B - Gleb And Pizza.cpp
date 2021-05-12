#include <bits/stdc++.h>

using namespace std;

int main()
{
   int r,d,n,x,y,a,innerRad,cnt=0;
   float dist1,dist2;
   cin>>r>>d>>n;
   innerRad=r-d;
   for(int i=0;i<n;i++)
   {
       cin>>x>>y>>a;
       dist1=sqrt((pow(x,2))+(pow(y,2)))-a;
       dist2=dist1+2*a;
       if(dist1>=innerRad && dist2<=r)
        cnt++;

   }
   cout<<cnt;

    return 0;
}
