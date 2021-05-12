#include <iostream>

using namespace std;

int main()
{
    int n,b,d,a,cnt=0,ans=0;
    cin>>n>>b>>d;
    while(n--)
    {
        cin>>a;
        if(a>b)
            continue;
        cnt+=a;
        if(cnt<=d)
            continue;
        ans++;
        cnt=0;
    }
    cout<<ans;
    return 0;
}
