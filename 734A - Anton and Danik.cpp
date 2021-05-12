#include <iostream>

using namespace std;

int main()
{
    int n,cntA=0,cntD=0;
    char ans;
    cin>>n;
    while(n--)
    {
        cin>>ans;
        if(ans=='A')
            cntA++;
        else
            cntD++;
    }
    if(cntA>cntD)
        cout<<"Anton"<<endl;
    else if(cntA<cntD)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
