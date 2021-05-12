#include <bits/stdc++.h>

using namespace std;
int n,cnt=0;
void hexa(int x)
{
    if (x<=n)
        cnt++;
    else
        return;
    hexa(10*x+1);
    hexa(10*x+0);
}

int main()
{
    cin>>n;
    cnt=0;
    hexa(1);
    cout<<cnt<<endl;


    return 0;
}
