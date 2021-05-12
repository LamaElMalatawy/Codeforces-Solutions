#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    vector<string>v;
    int n,m;
    cin>>n;
    m=n/2;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    cout<<v[m];

    return 0;
}
