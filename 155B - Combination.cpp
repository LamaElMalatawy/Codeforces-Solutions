#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)

using namespace std;

int main() {

    IO;
    int n,cnt=0,ans=0;
    cin>>n;
    vector<pair<int,int>>cards(n);
    for (int i = 0; i < n; ++i) {
        cin>>cards[i].second>>cards[i].first;
    }
    sort(cards.rbegin(),cards.rend());
    if(cards[0].first==0)
    {
        cout<<cards[0].second;
        return 0;
    }
    int i=1;
    cnt+=cards[0].first;
    ans+=cards[0].second;
    while(cnt>0){
        if(i==n)
            break;
        --cnt;
        cnt+=cards[i].first;
        ans+=cards[i].second;
        i++;

    }

    cout<<ans;
    return 0;
}
