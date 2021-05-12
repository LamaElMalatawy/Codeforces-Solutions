#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    double x1,x2,y1,y2,r1,r2,dist,ans;

    cin>>x1>>y1>>r1>>x2>>y2>>r2;

    dist=sqrt(pow((x1-x2),2)+pow((y1-y2),2));


   if(dist>r1+r2)
    ans=(dist-r1-r2)/2;
   else if (dist<r1-r2)
     ans=(r1-r2-dist)/2;
   else if(dist<r2-r1)
      ans=(r2-r1-dist)/2;


    cout<<fixed<<setprecision(15)<<ans;


    return 0;
}
