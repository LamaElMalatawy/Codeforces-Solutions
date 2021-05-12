#include <iostream>

using namespace std;

int main()
{
   int y,w,m,n;
   cin>>y>>w;
   if(y!=w)
   {
       m=max(y,w);
   }
   else
    m=y;
    n=6-m+1;
    if(n==1)
        cout<<"1/6"<<endl;
    else if(n==2)
        cout<<"1/3"<<endl;
    else if(n==3)
         cout<<"1/2"<<endl;
    else if(n==4)
         cout<<"2/3"<<endl;
    else if(n==5)
         cout<<"5/6"<<endl;
    else if(n==6)
         cout<<"1/1"<<endl;
    else
        cout<<"0/1"<<endl;
    return 0;
}
