#include <iostream>

using namespace std;

int main()
{
    int n,t,k,d,cnt=0;
    cin>>n>>t>>k>>d;
    while(cnt<=d)
    {
        n-=k;
        cnt+=t;
    }
        if(n<=0)
            cout<<"NO";
        else
            cout<<"YES";



    return 0;
}
