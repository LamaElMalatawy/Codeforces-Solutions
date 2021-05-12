#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cntS=0,cntD=0;
    vector<int>v;
    cin>>n;
    int arr[n],l=0,r=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(l<=r)
    {
        if(arr[l]<arr[r])
        {
            v.push_back(arr[r]);
            r--;
        }
        else
        {
            v.push_back(arr[l]);
            l++;
        }


    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            cntS+=v[i];
        else
            cntD+=v[i];
    }
    cout<<cntS<<" "<<cntD;
    return 0;
}
