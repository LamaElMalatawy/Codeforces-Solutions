#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[6][6],a,b;
    for(int i = 1 ; i<6;i++)
    {
        for(int j= 1 ; j<6;j++)
        {
            cin>>arr[i][j];
            if (arr[i][j]==1)
            {
                a=i;
                b=j;

            }
        }

    }
    int dist = abs(3-a)+abs(3-b);
    //cout<<a<<" "<<b;
    cout<<dist;
    return 0;
}
