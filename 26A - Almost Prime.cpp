#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,ans=0;
    set<int> s;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int m=i;

        for(int j=2; j*j<=i; j++)
        {
            while(m%j==0)
            {
                s.insert(j);
                m/=j;


            }
        }
        if(m>1)
            s.insert(i);
        if(s.size()==2)
            ans++;
        s.clear();


    }
    cout<<ans;


    return 0;
}
