#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,x,y,q;

    cin>>n>>q;
    while(q--)
    {

       long long ans;
        cin>>x>>y;
        ans=(x-1)*n+y+1;
        if((x+y)%2==1)
            ans+=n*n;

        cout<<ans/2<<endl;

    }
    return 0;
}
