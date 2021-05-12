#include <iostream>

using namespace std;

int main()
{
    int n,d,cnt=0;
    unsigned long long x;
    char c;
    cin>>n>>x;
    while(n--)
    {
        cin>>c>>d;
        if(c=='+')
            x+=d;
        else if(c=='-' && x>=d)
            x-=d;
        else
            cnt++;
    }
    cout<<x<<" "<<cnt;
    return 0;
}
