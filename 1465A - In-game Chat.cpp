#include <iostream>

using namespace std;

int main()
{
    int t,n,m,cnt=0;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n;
        m=n;
        cin>>s;
        for(int i =n-1; i>=0; i--)
        {
            if(s[i]==')')
                cnt++;
            else
                break;
        }
        //cout<<cnt<<endl;
        if(cnt>m/2 )
        {
            cout<<"YES"<<endl;
            cnt=0;
        }
        else
        {
            cout<<"NO"<<endl;
            cnt=0;
        }
    }

    return 0;
}
