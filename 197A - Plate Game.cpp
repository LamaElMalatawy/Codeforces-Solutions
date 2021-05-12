#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a,b,r,mini;
    cin>>a>>b>>r;
    mini=min(a,b);
         if(2*r>mini)
             cout<<"Second"<<endl;
    else
        cout<<"First"<<endl;


    return 0;
}
