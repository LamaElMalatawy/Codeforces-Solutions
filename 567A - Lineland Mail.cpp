#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,mini,maxi,dist1,dist2,dist3,dist4;
    cin>>n;
    int arr[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

    }

    arr[0]=arr[n];
    arr[n+1]=arr[1];
    for(int i=1;i<=n;i++)
    {
        dist1=abs(arr[i]-arr[i-1]);
        dist2=abs(arr[i+1]-arr[i]);
        dist3=abs(arr[i]-arr[0]);
        dist4=abs(arr[n+1]-arr[i]);
        mini=min(dist1,dist2);
        maxi=max(dist3,dist4);
        cout<<mini<<" "<<maxi<<endl;
    }

    return 0;
}
