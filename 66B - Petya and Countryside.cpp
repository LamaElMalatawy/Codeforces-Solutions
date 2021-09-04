#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N];


using namespace std;

int main() {

    IO;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    int ans,res=0;
    for (int i = 0; i < n; ++i) {
        ans=1;
        int j=i+1,k=i-1;
        if(i==0)
        {
            while (j<n && a[j]<=a[j-1])
            {
                ans++;
                j++;
            }
        }else if(i==n-1)
        {
            while (k>=0 && a[k]<=a[k+1])
            {
                ans++;
                k--;
            }
        }else
        {
            while (k>=0 && a[k]<=a[k+1])
            {
                ans++;
                k--;
            }
            while (j<n && a[j]<=a[j-1])
            {
                ans++;
                j++;
            }
        }
        res=max(res,ans);
    }
    cout<<res;
    return 0;
}
