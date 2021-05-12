#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<int>loc;
    vector<bool> found(101,false);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    for(int i=0; i<n; i++)
    {
        if(!found[arr[i]])
        {

            found[arr[i]]=true;
            loc.push_back(i+1);
        }

    }
    cout<<endl;
    if(loc.size()<k)

        cout<<"NO";

    else{
        cout<<"YES"<<endl;
        for(int i=0; i<k; i++)
        {
            cout<<loc[i]<<" ";
        }

    }
    return 0;
}
