#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;



int main() {


    IO;
    int n,x;
    cin>>n;
    stack<int>st;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        while(!st.empty() && st.top()>=i-x)
            st.pop();
        st.push(i);

    }
    cout<<st.size();
    return 0;
}
