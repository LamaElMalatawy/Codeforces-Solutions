#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = (k*l)/nl;
    int limes = c*d;
    int salt = p/np;
    set<int> s;
    s.insert(drink),s.insert(limes),s.insert(salt);
    cout<<*s.begin()/n;


    return 0;
}
