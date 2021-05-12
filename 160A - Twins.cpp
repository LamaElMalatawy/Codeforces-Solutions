#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,ans=0,sum2=0;
    float d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    d=sum/2;
    sort(arr,arr+n);
     for(int i=n-1;i>=0;i--)
    {
         sum2+=arr[i];
         ans++;
         if(sum2>d)
               break;
    }
    cout<<ans;
    return 0;
}
