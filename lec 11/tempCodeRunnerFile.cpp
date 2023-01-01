#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        int arr[10000] ;
	    int n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int j=0;j<n;j++)
	    {
	        cout<<arr[j];
	    }
	}
	return 0;
}
