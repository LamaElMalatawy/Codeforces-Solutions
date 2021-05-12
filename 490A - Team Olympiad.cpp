#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n,cnt1=0,cnt2=0,cnt3=0,cnt=0;
   cin>>n;
   int arr[n+1];
   vector<int>v1;
   vector<int>v2;
   vector<int>v3;
   bool vis[n]={false};
   for(int i=1;i<=n;i++)
   {
       cin>>arr[i];
       if(arr[i]==1)
        {
            cnt1++;
        v1.push_back(i);}
       else if(arr[i]==2)
        {
            cnt2++;
         v2.push_back(i);
        }
       else
        {
            cnt3++;
         v3.push_back(i);
         }
   }
   while(cnt1!=0 && cnt2!=0 && cnt3!=0)
   {
        cnt++;
       cnt1--;
       cnt2--;
       cnt3--;
   }
   cout<<cnt<<endl;

     for(int i=0;i<cnt;i++)
     {
         cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
     }

    return 0;
}
