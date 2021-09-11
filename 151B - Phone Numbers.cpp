#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
//#define ll long long

//const int N=1e6+5;

//ll a[N]={0},b[N]={0};

using namespace std;



int main() {

    IO;
    int n;
    cin>>n;
    int si,maxt=0,maxp=0,maxf=0;
    string str;
    bool flag1,flag2;
    vector<string>taxi(n),pizza(n),friends(n);
    vector<string>names(n);
    vector<int>freq1(n,0),freq2(n,0),freq3(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>si>>names[i];
        if(si==0)
        {
            taxi[i]=names[i];
            pizza[i]=names[i];
            friends[i]=names[i];
            continue;
        }

        int prev;
        for (int k = 0; k < si; ++k) {
            vector<int>digits(10,0);
            cin>>str;
            flag1=false,flag2=true;
            for (int j = 0; j < str.size(); ++j) {
                if(j==2 || j==5)
                    continue;
                ++digits[str[j]-'0'];
                if(j!=0 && str[j]-'0'>prev)
                {
                    flag2=false;
                    break;
                }
                prev=str[j]-'0';

            }

            for (int j = 0; j < digits.size(); ++j) {
                if(digits[j]==6) {
                    flag1=true;
                    break;
                }
                else if(digits[j]>1)
                {
                    flag2=false;
                    break;
                }

            }

            if(flag1) {
                taxi[i]=names[i];
                ++freq1[i];
                maxt=max(maxt,freq1[i]);
            }
            else if (flag2) {
                pizza[i]=names[i];
                ++freq2[i];
                maxp=max(maxp,freq2[i]);
            }
            else {
                friends[i]=names[i];
                ++freq3[i];
                maxf=max(maxf,freq3[i]);
            }

        }


    }
    int cnt=0;
    cout<<"If you want to call a taxi, you should call: ";
    if(!maxt)
    {
        for (int i = 0; i < n; ++i) {
            if(cnt>0)
                cout<<", ";
            cout<<names[i];
            cnt++;
            if(i==names.size()-1)
                cout<<'.';

        }
    }
    else {
        for (int i = 0; i < taxi.size(); i++) {
            if (freq1[i] == maxt) {
                if (cnt > 0)
                    cout << ", ";
                cout << taxi[i];
                cnt++;
            }
            if (i == taxi.size() - 1)
                cout << '.';
        }

    }cout<<endl<<"If you want to order a pizza, you should call: ";
    cnt=0;
    if(!maxp)
    {
        {
            for (int i = 0; i < n; ++i) {
                if(cnt>0)
                    cout<<", ";
                cout<<names[i];
                cnt++;
                if(i==names.size()-1)
                    cout<<'.';

            }
        }
    }
    else {
        for (int i = 0; i < pizza.size(); i++) {
            if (freq2[i] == maxp) {
                if (cnt > 0)
                    cout << ", ";
                cout << pizza[i];
                ++cnt;
            }
            if (i == pizza.size() - 1)
                cout << '.';

        }
    }
    cout<<endl<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    cnt=0;
    if(!maxf)
    {
        {
            for (int i = 0; i < n; ++i) {
                if(cnt>0)
                    cout<<", ";
                cout<<names[i];
                cnt++;

                if(i==names.size()-1)
                    cout<<'.';

            }
        }
    }
    else {
        for (int i = 0; i < friends.size(); i++) {
            if (freq3[i] == maxf) {
                if (cnt > 0)
                    cout << ", ";
                cout << friends[i];
                ++cnt;
            }
            if (i == friends.size() - 1)
                cout << '.';

        }
    }
    return 0;
}
