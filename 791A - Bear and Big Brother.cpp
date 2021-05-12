#include <iostream>

using namespace std;

int main()
{
   int a,b,cnt=0;
   cin>>a>>b;
   while(true)
   {
       a*=3;
       b*=2;
       cnt++;
       if(a>b)
        break;
   }
   cout<<cnt<<endl;
    return 0;
}
