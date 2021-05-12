#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n,m,a;
    cin>>n>>m>>a;
    long long l,w;
    long long  area=0;
    l=ceil(1.0*n/a);
    w=ceil(1.0*m/a);
    area=l*w;
    cout<<area;

    return 0;
}
