#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,mini,maxi,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    mini=arr[0];
    maxi=arr[n-1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mini && arr[i]<maxi)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
