#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> st;
    string s;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        st.insert(s.substr(i)+s.substr(0,i));
    }
   cout<<st.size()<<endl;

    return 0;
}
 
