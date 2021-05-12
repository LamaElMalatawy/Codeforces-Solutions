#include <iostream>

using namespace std;

int main()
{
    int n,t,m;
    cin>>n>>t;
    if(n==1 && t==10)
    {
        cout<<-1;
        return 0;
    }
    if(t==10)
    {
        m=n-2;
        cout<<t;
        while(m--)
            cout<<0;
        return 0;
    }
    while(n--)
        cout<<t;
    return 0;
}
