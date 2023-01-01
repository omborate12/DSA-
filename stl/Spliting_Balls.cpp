#include <iostream>
using namespace std;

int findFactorial(int n)
{
    
    
    int ans=1;
    for (int i = n; i > 0; i--) {
        ans*=i;
    }
    return ans;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a=0;
	    cin>>n;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin>>arr[i];
	    }
	    for (int i = 0; i < n; i++) {
	         a+=findFactorial(arr[i]);
	        
	    }
	    cout<<a<<endl;
	    
	}
	return 0;
}
