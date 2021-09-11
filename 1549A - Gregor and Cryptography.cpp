#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N]={0},b[N]={0};

using namespace std;



int main() {

    IO;
    int t;
    cin>>t;
    ll p;
    while (t--){
        cin>>p;
        if(p==5)
        {
            cout<<2<<" "<<4<<endl;
            continue;
        }
        int cnt=0,m=p;
        for (int i = 0; i <6 ; i++) {
            m--;
            cnt++;
            if(m%6==0) {
                break;
            }
        }

        int l=p-cnt;
        if(l==6){
            cout<<2<<" "<<p-1<<endl;
        }
        else
            cout<<6<<" "<<l<<endl;


    }
    return 0;
}
