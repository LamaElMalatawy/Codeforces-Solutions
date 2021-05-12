#include <iostream>

using namespace std;

int main()
{
    int n,cnt1=0,cnt2=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cnt1+=arr[i];
        if(cnt1<0)
        {
            cnt2++;
            cnt1=0;
        }
    }
    cout<<cnt2;
    return 0;
}
