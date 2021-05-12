#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a,b;
    int s=0;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
       a[i]=tolower(a[i]);
       b[i]=tolower(b[i]);
    }
    if(a==b)
    {
        cout<<0;
    }
    else if(a<b)
        cout<<-1;
    else
        cout<<1;
   /* for(int i = 0 ; i <a.length();i++)
    {
        tolower(a[i]);
    }
    for(int i = 0 ; i <a.length();i++)
    {
        cout<<a[i];
    }*/
    return 0;
}
