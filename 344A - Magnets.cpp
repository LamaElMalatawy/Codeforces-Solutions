#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    string a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    a[n]={"00"};
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
            cnt++;
    }
    cout<<cnt;
    return 0;
}
