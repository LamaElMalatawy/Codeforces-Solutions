#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    
    bool isPrime=true;
    long long n,cnt=0,prime,m;
    cin>>n;
    while(n>0)
    {
        if(n%2==0)
        {

            cnt+=(n/2);
            break;

        }
        m=sqrt(n);
       
            for (long long i = 3; i <= m; i+=2)
            {
               
                if (n % i == 0)
                {
                    prime= i;
                    isPrime=false;
                    break;
                }


            }
            if(isPrime)
                prime=n;

       
        n-=prime;
        cnt++;

    }
    cout<<cnt<<endl;
    return 0;
}
