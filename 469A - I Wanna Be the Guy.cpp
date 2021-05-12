#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,p,q,x,y;
   set<int>a;
   cin>>n>>q;
   for (int i=1;i<=q;i++)
   {
       cin>>x;
       a.insert(x);
   }
   cin>>p;
   for(int i=1;i<=p;i++)
   {
       cin>>y;
       a.insert(y);
   }
   if (a.size()==n)
    cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
