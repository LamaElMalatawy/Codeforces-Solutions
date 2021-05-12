#include <iostream>
#include <vector>
#include <map>
#include <cmath>

#define ll long long

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    vector<long long>vec;
    map<long long,long long>freq;
    long long x,cnt=0;
    cin>>n;
    while(n--){
        cin>>x;
        vec.push_back(x);
    }
    for(auto v:vec)
        freq[v]++;

    for(int i=0;i<vec.size();i++){
        for(int j=0;j<32;j++){
            ll sum = 1ll<<j;
            ll sub=sum-vec[i];
            cnt+=freq[sub];
            if(vec[i]*2==sum)
                --cnt;
        }
    }
    cout<<cnt/2<<'\n';
    return 0;
}
