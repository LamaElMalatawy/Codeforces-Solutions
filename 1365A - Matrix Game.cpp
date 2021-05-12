#include <bits/stdc++.h>

using namespace std;

int main()
{
 ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t,n,m;
  set <int> r,c;
  cin>>t;
  while(t--)
  {
      cin>>n>>m;
      int arr[n][m];
      for(int i=0 ; i<n ; i++)
      {
          for(int j=0;j<m;j++)
          {
              cin>>arr[i][j];
              if(arr[i][j]==1)
              {
                  r.insert(i);
                  c.insert(j);

              }
          }
      }

     int ans = min(n-r.size(),m-c.size());

      if(ans%2 == 0 )
        cout<<"Vivek"<<endl;
      else
        cout<<"Ashish"<<endl;

     r.clear();
     c.clear();
  }
    return 0;
}
