

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n, k, ans=0;
    cin >> n >> k;
    for(int i=0; i <n; i++)
    {
        cin >> s;

        bool vis[10]={0};
        for(int j=0; j<s.size(); j++)
        {
            vis[s[j]-'0'] = 1;

        }
        bool check = 1;
        for(int i=0; i<=k; i++)
        {
            if(vis[i] == 0)
            {
                check = 0;
                break;
            }
        }
        if(check)
            ans++;
    }

    cout << ans << endl;



    return 0;
}
