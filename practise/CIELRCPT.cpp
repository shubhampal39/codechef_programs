#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
cin>>t;
	while(t--)
	{int n,p=0,count=0;
	cin>>n;
	
	  for(int i=11;i>=0;)
	  {
	    int m=pow(2,i);
     if(n>=m)
      {
         n=n-m;
         count++;
          
      }
      else{i--;}
    

	  }	    
	    
	 cout<<count<<endl;   
	}
	return 0;
}
