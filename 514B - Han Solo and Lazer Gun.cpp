#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double x0,y0,x,y,m;
    bool flag=false;
    set<double>slope;
    cin>>n>>x0>>y0;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if(x==x0)
            flag=true;
        else
        {
            m=(y-y0)/(x-x0);
            slope.insert(m);
        }
    }
    if(flag)
        cout<<slope.size()+1;
    else
        cout<<slope.size();
    return 0;
}
