#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
const ll N=2e6+5;
using namespace std;


ll a[N]={0},b[N]={0};

int main() {

    IO;
    /*int n,idx;
    cin>>n;
    ll mn1= 1e9 + 1,mn2=1e9+1;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        if(a[i]<mn1)
        {
            mn2=mn1;
            mn1=a[i];
        }else if(a[i]<mn2 )
            mn2=a[i];
        if(a[i] == mn1)
            idx=i;
    }
    //cout<<mn1<<" "<<mn2;
    ll cnt=mn1;
    if(mn1==mn2)
    {
        int f,s;
        for (int i = 0; i < n; ++i) {
            if(a[i] == mn1)
            {
                f=i;
                break;
            }
        }
        int mxdist=0;
        for (int i = n-1; i >=0; --i) {
            {
                if(a[i] == mn1 && i!=f)
                {
                    mxdist=max(mxdist,i-f);
                    mxdist=max(mxdist,((n-i)+(f-0)));
                    if((i-f==mxdist)||((n-i)+(f-0))==mxdist)
                        s=i;
                }
            }
        }
        //cout<<mxdist<<" ";
        for (int i = 0; i < n; ++i) {
            if ((i+s+1)%n==s) {
                break;
            }
            cnt += mn1;
            a[(i + s+1) % n] -= mn1;
        }

        for (int i = 0; i < n; ++i) {
            if((a[(i+s+1)%n]==0)||(i+s+1)%n==f)
                break;
            ++cnt;
        }
        cout<<f<<" "<<s<<" ";
    }else{
        for (int i = 0; i < n; ++i) {
            if((i+idx+1)%n==idx)
                break;
            cnt += mn1;
            a[(i + idx+1) % n] -= mn1;
        }

        for (int i = 0; i < n; ++i) {
            if((i+idx+1)%n==idx)
                break;
            ++cnt;
        }
    }



       //cnt+=(n-idx);
       cout<<cnt;*/

    ll n,idx;
    ll mn=1e9+10;
    cin>>n;
    for (ll i = 0; i < n; ++i) {
        cin>>a[i];
        if(a[i]<mn) {
            mn = a[i];
            idx = i;
        }
    }
    //a[n+1]=mn;
    ll cnt=0,mx=0;
    for (int i = 0; i < n; ++i) {
        if(a[(i+idx)%n]>mn)
            cnt++;
        else
            cnt=0;
        mx=max(mx,cnt);
    }
    cout<<mn*n+mx;
    return 0;
}
