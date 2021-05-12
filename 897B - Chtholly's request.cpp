#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    long long p, ans=0,sum=0,res;
    string s,str;
    cin>>k>>p;

    for(int i=1;i<=k;i++){
      s = to_string(i);
      reverse(s.begin(),s.end());
      str=(to_string(i))+s;
      ans=stoll(str, nullptr,10);
      //cout<<ans<<endl;
      sum+=ans;
      res=sum%p;
    }

    cout<<res%p;

    return 0;
}
