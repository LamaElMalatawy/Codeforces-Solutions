#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,cnt=0,ans=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if (a==1)
            cnt++;
        if(b==1)
            cnt++;
        if(c==1)
            cnt++;
        if(cnt>=2)
            ans++;
        cnt=0;

    }
    cout<<ans<<endl;
    return 0;
}
