#include<bits/stdc++.h>

using namespace std;
int main(){
	int n,cnt=0;
	bool flag=false;
	cin>>n;
	while(int(sqrt(n))==sqrt(n)&&n>1)
    {
    	n=sqrt(n);
		cnt++;
	}
	for(int i=sqrt(n);i>=2 && n>1;--i)
    {

		while(n%(i*i)==0) {
			cnt++;
            n/=i;
           flag=true;
		}
	}
	if(flag)
	cnt++;
	cout<<n<<" "<<cnt<<endl;
	return 0;
}
