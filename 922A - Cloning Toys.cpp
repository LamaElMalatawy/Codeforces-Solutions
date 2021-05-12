#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(y==0)
        cout<<"No"<<endl;
   else  if(y==1)
    {
        if(x==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
  else  if(x>=y-1 && (x-y+1)%2==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
