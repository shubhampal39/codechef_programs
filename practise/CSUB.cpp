#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int t,n,i,r,k,a;
	cin>>t;
while(t--)
	{ a=0;
	  cin>>n;
    	string s;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			  a++;
		}
		r=(a*(a+1))/2;
		cout<<r<<"\n";
	}
	return 0;
}
 
