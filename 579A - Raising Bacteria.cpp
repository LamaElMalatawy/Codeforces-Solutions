#include <iostream>
using namespace std;

int main()
{
    int x,ans=0;
    cin>>x;
    while(x>0)
    {
        if(x%2!=0)
            ans++;
        x/=2;
    }
    cout<<ans;
    return 0;
}
