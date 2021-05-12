#include <iostream>
#include <stack>
#include <set>
#include <map>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string s,prev=" ";
    stack<string>st;
    set<string>noDup;
    map<string,bool> ans;

    cin>>n;
    while(n--) {
        cin >> s;
        st.push(s);

    }
    while(!st.empty())
    {

        prev=st.top();
        if(!ans[prev])
        {cout<<prev<<'\n';
        ans[prev]= true;}
        st.pop();


    }


    return 0;
}
