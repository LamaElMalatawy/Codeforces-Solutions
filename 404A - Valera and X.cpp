#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n,cnt1=0,cnt2=0;
    set<char>s;
    cin>>n;
    char arr[n][n],a,b;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(i==0 && j==0)
                a=arr[i][j];
            else if(i==0 && j==1)
                b=arr[i][j];
            else
            {
                if(i==j || i+j==n-1)
                {
                    if(arr[i][j]==a)
                        cnt1++;
                }
                else
                {
                    if(arr[i][j]==b)
                        cnt2++;
                }
            }
        }
    }
    //cout<<cnt1<<" "<<cnt2<<endl;

    if(cnt1==n*2-2 && cnt2==n*n-cnt1-2 && a!=b)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
