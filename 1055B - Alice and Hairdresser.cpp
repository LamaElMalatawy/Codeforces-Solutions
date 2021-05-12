#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,l,cnt=0;
    cin>>n>>m>>l;
    long long hairlines[n+1];
    hairlines[0]=0;
    hairlines[n+1]=0;
    for(int i=1; i<=n; i++)
    {

        cin>>hairlines[i];
        if(hairlines[i]>l && hairlines[i-1]<=l)
            cnt++;
    }
    while(m--)
    {
        int t;
        cin>>t;
        if(t==0)
        {
            cout<<cnt<<endl;
        }
        else if(t==1)
        {
            long long p,d;
            cin>>p>>d;
            hairlines[p]+=d;
            if(hairlines[p]<=l || hairlines[p]-d>l)
                continue;
            else if(hairlines[p-1]>l && hairlines[p+1]>l)
                cnt--;
            else if (hairlines[p-1]<=l && hairlines[p+1]<=l)
                cnt++;
        }
    }

    return 0;
}
