#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define ll long long
using namespace std;

ll fact(int x){
    if(x==0 ||x==1)
        return 1;
    return x*fact(x-1);
}


int main() {

    IO;
    int n;
    cin>>n;
    string s;
    cin>>s;
    string str="";
    for(int i=0;i<n;i++){
       int a=s[i]-48;
       if(a==2)
           str+='2';
       else if(a==3)
           str+='3';
       else if(a==4)
           str+="322";
       else if(a==5)
           str+='5';
       else if(a==6)
           str+="53";
       else if(a==7)
           str+='7';
       else if(a==8)
           str+="7222";
       else if(a==9)
           str+="7332";
    }

    sort(str.rbegin(),str.rend());
    cout<<str;
    return 0;
}