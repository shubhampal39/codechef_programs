#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long int t;
	cin>>t;
 while(t--)
	{ 
         int a=0,ans=0;
    	   string s;
	   cin>>s;
 
  	for(int i=0;i<s.length();i++)
         {
           if(s[i]=='<')
              {
                a++;}

            else 
             {
               a--;
            if(a==0)
              {ans=max(ans,i+1);}
             else if (a<0) {break;}
                   }           

            }

   cout<<ans<<endl;        

       }
	return 0;
}
 
