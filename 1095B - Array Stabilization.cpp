#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,ans;
    cin>>a;
       int arr[a];
        for(int i=0; i<a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a);
        ans=min((arr[a-2]-arr[0]),(arr[a-1]-arr[1]));
        cout<<ans<<endl;

    return 0;
}
