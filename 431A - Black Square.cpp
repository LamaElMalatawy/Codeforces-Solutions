#include <iostream>
#include <string>
using namespace std;

int main()
{
   int arr[5], ans=0;
   int b;
   string s,a;
   for(int i=1;i<5;i++)
   {
       cin>>arr[i];
   }
  
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
       a=s[i];
       b=stoi(a);
       ans+=arr[b];
    
   }
   cout<<ans;
    return 0;
}
