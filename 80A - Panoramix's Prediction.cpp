#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


bool isPrime(int m)
{
    bool prime=true;
    int x=sqrt(m);
    for(int i=2; i<=x; i++)
    {
        if(m%i==0)
        {
            prime=false;
            break;
        }
    }
    return prime;
}

int main()
{
    int n,m;
    vector<int>v;
    cin>>n>>m;
    int x=sqrt(m);
    bool flag1,flag2=false;
    flag1 = isPrime(m);
    for(int j=2; j<=m; j++)
    {
        if(isPrime(j))
            v.push_back(j);
    }
  
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==m)
        {
            if(v[i-1]==n)
                flag2=true;
            break;
        }
    }
    if(flag1 && flag2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
