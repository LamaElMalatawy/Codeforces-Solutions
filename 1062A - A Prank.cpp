#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cnt=0,ans=0;
    cin>>n;
    int arr[n];
    arr[0]=0;
    arr[n+1]=1001;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
   for(int i=1;i<=n;i++)
   {
       if(arr[i-1]+1==arr[i] && arr[i+1]-1==arr[i])
          {
            cnt++;
            ans=max(cnt,ans);
          }
       else
        cnt=0;
   }
   cout<<ans<<endl;



    return 0;
}
