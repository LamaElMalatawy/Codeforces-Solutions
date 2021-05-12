#include <iostream>
#include<set>
using namespace std;

int main()
{
    int t,n,m,a,sum,ans;
    set<int>s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        sum=n+m;
        while(n--)
        {
            cin>>a;
            s.insert(a);
        }
        while(m--)
        {
            cin>>a;
            s.insert(a);
        }
        ans=sum-s.size();
        cout<<ans<<endl;
        s.clear();

    }
    return 0;
}
