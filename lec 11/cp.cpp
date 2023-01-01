#include <iostream>
// #include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,n,n1,x,z;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    n1=n-x;
	    if(n1<=x)
	    {
	        cout<<n1<<endl;
	        
	    }
	    else
	    {
	        cout<<x<<endl;
	    }
	//    int z=min(n1,x);
	   //cout<<min(n1,x)<<endl;
	}
	
	
	return 0;
}
