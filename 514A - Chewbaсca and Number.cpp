#include <iostream>
#include <vector>
using namespace std;

int main()
{
   string n;
   vector<int>v;
   cin>>n;
   for(int i=0;i<n.size();i++){
    v.push_back(n[i]-48);

    if(i==0 && v[i]==9)
        cout<<v[i];
    else if(v[i]>4)
        cout<<9-v[i];
    else
        cout<<v[i];

   }

    return 0;
}
