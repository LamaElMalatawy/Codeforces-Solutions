#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,best,worst,cnt1=0,cnt2=0;
    cin>>n>>k;
    string s,pass;
    vector<int>v;
    int m=n;
    while(n--)
    {
        cin>>s;
        int lenS=s.size();
        v.push_back(lenS);
    }
    cin>>pass;
    int lenPass=pass.size();
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++)
    {
        if(v[i]<lenPass)
            cnt1++;
        else if(v[i]==lenPass)
            cnt2++;
    }
    cnt2+=cnt1;
    best=cnt1+(cnt1/k)*5+1;
    worst=cnt2+((cnt2-1)/k)*5;
    cout<<best<<" "<<worst;


    return 0;
}
