#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;

int main() {
    IO;
    int n;
    bool flag = false,no=false;
    cin >> n;
    vector<ll> vec(n + 1);
    ll l = -1, r=n, dup;
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    vec[n] = vec[n - 1]+1;
    for (int i = 0; i < n; ++i) {
        if (!no && vec[i] > vec[i + 1]) {
            l = i;
            no=true;
        }
        else if (l != -1 && vec[i] < vec[i + 1]) {
            //cout<<"hi"<<endl;
            r = i;
            break;
        }
    }
    if(l== -1 || r==0)
    {
        cout<<"yes\n";
        cout<<1<<" "<<1;
        return 0;
    }
    //cout<<l<<" "<<r<<endl;
    reverse(vec.begin()+l,vec.begin()+r+1);
    vec[n]=vec[n-1]+1;
    /*for(auto i:vec)
        cout<<i<<" ";
    cout<<endl;*/
    for (int i = 0; i < n; ++i) {
        if (vec[i] > vec[i + 1]) {
            flag = true;
            break;
        }
    }
    if (flag)cout << "no\n";
    else { cout << "yes\n" << l+1 << " " << r+1; }
    return 0;
}
