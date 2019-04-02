#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
   int n;
    cin>>n;
  int a[n];
for(int i=0;i<n;i++)
{
 cin>>a[i];

}

sort(a,a+n);
int count=0;
long long int area=1;
for(int i=n-1;i>0;i--)
{
 if(a[i]==a[i-1])
  {
   count++;
   area=area*a[i];
 i--;
     }

if(count==2)
{
break;
}
}

if(count==2)
{
cout<<area<<endl;
}
else
{
  cout<<-1<<endl;
  }


}

}
