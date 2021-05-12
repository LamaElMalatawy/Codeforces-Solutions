#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    bool isPrime=true;

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        long long num=sqrt(x),m=sqrt(num);
        for(int i=2; i<=m; i++)
        {
            if(num%i==0)
            {
                isPrime=false;
                break;
            }

        }
        if(x>1)
        {
            if(num*num==x &&isPrime)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
        isPrime=true;
    }







    return 0;
}
