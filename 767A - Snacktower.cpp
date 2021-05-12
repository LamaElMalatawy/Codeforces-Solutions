#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,next;
    cin>>n;
    next=n;
    int snacks[n];
    bool visited[n+1]={false};
    for(int i=0;i<n;i++)
    {
        cin>>snacks[i];
        visited[snacks[i]]=true;
        while(visited[next])
        {
            cout<<next<<" ";
            next--;
        }
        cout<<endl;

    }
    return 0;
}
