#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char hor[n],ver[m];
    for(int i=0;i<n;i++)
    {
        cin>>hor[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>ver[j];
    }
    if((hor[0]=='<'&&ver[0]=='^')||(hor[n-1]=='<'&&ver[0]=='v')||(hor[0]=='>'&&ver[m-1]=='^')||(hor[n-1]=='>'&&ver[m-1]=='v'))
    cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
