#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    long long ans=0,cnt=1;
    cin>>n>>m;
    if(n>m)
        swap(n,m);
    long long i=5;
    while(cnt>0)
    {
        if(n>=i)
            cnt=i-1;
        else if(m>=i)
            cnt=n;
        else if(i>m)
            cnt=n-(i-m)+1;
        if(cnt>0)
            ans+=cnt;


        i+=5;
    }
    cout<<ans;

    return 0;
}
