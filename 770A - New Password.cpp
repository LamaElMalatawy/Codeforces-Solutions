#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,k;
    vector<char>v;
    cin>>n;
    char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cin>>k;
    int m=n-k;
    for(int i=0;i<k;i++)
    {
           v.push_back(alph[i]);
    }
    if(n==k)
    {
        for(int i=0;i<n;i++)
            cout<<alph[i];
    }
    else
    {

    while(v.size()<=n)
    {
        for(int i=0;i<m;i++)
        {
            v.push_back(v[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
    }
    return 0;
}
