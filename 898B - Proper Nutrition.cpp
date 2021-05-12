#include <iostream>
using namespace std;
int main()
{

    long long n, a, b;
    cin >> n >> a >> b;
    long long x=-1, y=-1;
    for(int i = 0; i <= n; i++)
    {
        if((n - i * a) % b == 0)
        {
            x = i;
            y = (n - i * a) / b;
            break;
        }
    }
    if(x >= 0 && y>=0)
    {
        cout<<"YES"<<endl<<x<<" "<<y;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
