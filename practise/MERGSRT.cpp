#include<bits/stdc++.h>
using namespace std;
int main()
{
int tt;
cin>>tt;
while(tt--)
{
int s,t,i,m,l=0;
cin>>s>>t>>i;
if(i>=s &&i<=t)
{cout<<s<<" "<<t<<endl;
   while(s!=t)
   {
    m=(s+t)/2;
    if(i<=m)
     { cout<<s<<" "<<m<<endl;
       t=m;     
     }
    else
     {
        cout<<m+1<<" "<<t<<endl;
       s=m+1;
     } 
  l++;
    }
  cout<<l+1<<endl; 
}
else
{cout<<"-1"<<endl;}

}
return 0;
}
