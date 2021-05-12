#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,dist;
    string track;
    bool obs=false;
    cin>>n>>k;
    cin>>track;
    int length= track.size();
    int posG=0,posT=0;
    for(int i=0; i<length; i++)
    {
        if(track[i]=='G')
            posG=i;
        if(track[i]=='T')
            posT=i;

    }

    dist=abs(posG-posT);

    if (dist%k==0 )
    {
        if(posG>posT)
            swap(posG,posT);
        for(int j=posG; j<=posT; j+=k)
        {
            if(track[j]=='#')
            {
                obs=true;
                break;
            }
        }
        if(!obs)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;



    return 0;
}
