#include <bits/stdc++.h>


using namespace std;

vector<long long int> lucky;

void check(long long  number, int four, int seven)
{
    if(number > 1e10)
        return ;

    if( four == seven)
        lucky.push_back(number);

    check(number * 10 + 7, four, seven+ 1);
    check(number * 10 + 4, four + 1, seven);
}

int main()
{
    check(4, 1, 0);
    check(7, 0, 1);

    int n;
    cin >> n;
    long long int low;
    sort(lucky.begin(), lucky.end());
    cout<<*lower_bound(lucky.begin(),lucky.end(),n);
    //cout << lucky[low] << endl;

    return 0;
}
