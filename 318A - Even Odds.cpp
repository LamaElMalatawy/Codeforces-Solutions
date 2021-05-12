#include <iostream>

using namespace std;

int main()
{
    long long n,k,m,cnt,l;
    cin>>n>>k;
    if(n%2==0)
    {
        m=n/2;
        l=n-1;
    }
    else
    {
        m=(n/2)+1;
        l=n;
    }
    if(k<m)
    {
        cnt=m-k;
        l-=(cnt*2);
        cout<<l;
    }
    else if(k==n)
    {
        if(n%2==0)
            cout<<n;
        else if(n==1)
            cout<<1;
        else
            cout<<n-1;
    }
    else if(k>m)
    {
        cnt=k-m;
        cout<<cnt*2;
    }
    else
        cout<<l;

    return 0;
}
