#include <iostream>

using namespace std;

int main()
{
   string a;
   int cnt1=0,cnt2=0;
   cin>>a;
   for(int i=0;i<a.size();i++)
   {
       if(a[i]>='a' && a[i]<='z')
          cnt1++;
       else
        cnt2++;
   }
   if (cnt1>=cnt2)
   {
       for(int i=0;i<a.size();i++)
       {
           a[i]=tolower(a[i]);
       }
   }
   else
   {
       for(int i=0;i<a.size();i++)
       {
           a[i]=toupper(a[i]);
       }
   }
   cout<<a;
    return 0;
}
