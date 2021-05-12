#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,mini=1000000000,index;
    bool flag=false;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(mini>=arr[i])
        {
            mini=arr[i];
            index = i+1;
        }
    }
    sort(arr,arr+n);
    if(arr[0]==arr[1])
        flag=true;
    if(flag)
        cout<<"Still Rozdil";
    else
        cout<<index;

    return 0;
}
