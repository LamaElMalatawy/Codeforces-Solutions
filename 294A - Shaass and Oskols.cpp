#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,a,b;
   cin>>n;
   int arr[n+1];
   for(int i=1;i<n+1;i++)
   {
       cin>>arr[i];
   }
   cin>>m;
   pair<int,int>p[m];
   for(int i=0;i<m;i++)
   {
       cin>>a>>b;
       p[i].first=a;
       p[i].second=b;
   }
 
   for(int i=0;i<m;i++)
   {
       for(int j=1;j<n+1;j++)
   {

       if(p[i].first==j)
       {if(j!=1 || j!=n)
       {
           arr[j-1]+=(p[i].second-1);
           arr[j+1]+=(arr[j]-p[i].second);
           arr[j]=0;
       }
       arr[j]=0;
       }
   }
   }
   for(int i=1;i<n+1;i++)
   {
       cout<<arr[i]<<endl;
   }

    return 0;
}
