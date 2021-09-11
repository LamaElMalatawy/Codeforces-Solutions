#include <bits/stdc++.h>

#define ll long long
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a-1;i>=b;i--)

const ll N=1e6+1;

ll a[N]={0};
//b[N]={0};

using namespace std;

vector<ll>b(N,0);
int main() {

   ll n;
   ll sum=0;
   cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        ++b[a[i]];
        sum+=a[i];
    }

    vector<int>idx;
    for (int i = 0; i < n; ++i) {
        sum-=a[i];
        --b[a[i]];
        if(sum/2<=N && sum%2==0  && b[(sum/2)]>0)
        {

                idx.push_back(i + 1);


        }
        ++b[a[i]];
        sum+=a[i];
    }
    cout<<idx.size()<<endl;
    for (int i = 0; i < idx.size(); ++i) {
        cout<<idx[i]<<" ";
    }


    return 0;
}
