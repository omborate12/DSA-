#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        int arr[10000]={2,5,1,} ;
	    int n;
	    for(int i=0;i<3;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+3);
	    for(int j=0;j<3;j++)
	    {
	        cout<<arr[j];
	    }
	}
	return 0;
}
