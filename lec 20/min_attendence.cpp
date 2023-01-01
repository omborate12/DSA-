#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// int t;
	// cin>>t;
	// while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    int arr[120];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int j=0;j<n;j++)
	    {
	        if(arr[j]==1)
	        {
	            count+=1;
	        }
	        
	    }
	    cout<<count<<endl;
	    int rem=120-n;
	    cout<<rem<<endl;
	    int final=rem+count;
        cout<<final<<endl;
        if((final/120)<0.75)
	   {
	       cout<<"no"<<endl;
	   }
	   else
	   {
	       cout<<"yes"<<endl;
	   }
	    
	}
	return 0;
}
