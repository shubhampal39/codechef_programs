#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
         long long int n,b,a[1000001];
        cin>>n>>b;
     
        for(int i=0;i<n;i++)
        {cin>>a[i];}
        long long int sum=0,sum1=0,sum2=0;
        sort(a,a+n);

        for(int i=0;i<n;i++)
        {
          sum=sum+a[i];            
        }


        for(int i=0;i<b;i++)
        {
          sum1=sum1+a[i];
            
        }
     
       for(int i=b;i<n;i++)
        {
            sum2=sum2+a[i];
            
        }
        int r=max(abs(sum1 - (sum - sum1)), abs(sum2 -  
                                  (sum - sum2))); 
          
  cout<<r<<endl;    
}
	// your code goes here
	return 0;
}
