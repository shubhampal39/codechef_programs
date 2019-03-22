#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,base;
        cin>>n;
        base=n-2;
        base=base/2;
        
        cout<<base*(base+1)/2<<endl;
        
    }
	// your code goes here
	return 0;
}

