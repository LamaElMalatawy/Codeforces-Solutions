#include <iostream>
#include <vector>
#include <cmath>

using namespace std;



int main()
{
  int l,cnt=0,ans;
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='1')
        cnt++;
  }
  l=s.size()-1;
  if(cnt==0)
  {
      cout<<0;
      return 0;
  }
  if(l%2==0)
  {
      if(cnt>1)
        ans = (l/2)+1;
      else
        ans= l/2;
  }
   else
    ans=s.size()/2;

    cout<<ans;
    return 0;
}
