#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long

const int N=1e6+5;

int a[N]={0},b[N]={0};

using namespace std;


int main() {

    IO;
    int n,x;
    cin>>n;
    vector<pair<int,int>>vec(n);
    for (int i = 0; i < n; ++i) {
        cin>>vec[i].first;
        vec[i].second=i;
    }
    sort(vec.begin(),vec.end());
    int cnt=0;
    for (int i = 0; i < n-1; ++i) {
        if(vec[i].first==vec[i+1].first)
            cnt++;
        if(cnt==2){
            cout<<"YES"<<endl;
            for (int j = 0; j < n; ++j) {
                cout<<vec[j].second+1<<" ";
            }cout<<endl;
            cnt=0;
            for (int j = 0; j < n-1; ++j) {
                if (vec[j].first==vec[j+1].first) {
                    cnt++;
                    swap(vec[j].second, vec[j + 1].second);
                    for (int k = 0; k < n; ++k)
                        cout << vec[k].second + 1 << " ";
                    cout << endl;
                    swap(vec[j].second, vec[j + 1].second);
                }
                    if(cnt==2)
                        return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
