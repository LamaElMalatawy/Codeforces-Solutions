#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

ll a[N]={0},b[N]={0};

using namespace std;



int main() {


    IO;
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    if(s==t)
    {
        cout<<0;
        return 0;
    }
    for (int i = 0; i < s.size(); ++i) {
        b[s[i]]++;
        b[t[i]]--;
    }
    bool flag=true;
    for (int i = 0; i < t.size(); ++i) {
        if(b[s[i]])
        {
            flag=false;
            break;
        }
    }
    if(!flag)
        cout<<-1;
    else{
        vector<int>idx;
        int pos=-1;
        for (int i = 0; i < n; ++i) {
            if(s[i]==t[i])
                continue;
            for (int j = i+1; j < n; ++j) {
                if(t[i]==s[j]) {
                    pos = j-1;
                    break;
                }

            }
            for (int j = pos; j >= i; --j) {
                swap(s[j],s[j+1]);
                idx.push_back(j+1);
            }
        }
        cout<<idx.size()<<endl;
        for (int i = 0; i < idx.size(); ++i) {
            cout<<idx[i]<<" ";
        }
    }

    return 0;
}
