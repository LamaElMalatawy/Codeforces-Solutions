#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0;
    long long x,y;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        if (x%i==0 && x/i<=n)
            {cnt++;
              //cout<<x/i<<endl;
            }
    }
    cout<<cnt;
    return 0;
}
