#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    vector<int> a ;
	    a.push_back(1);
	    a.push_back(1);
	    for(int i=2;i<20;i++)
	    {   
           int k=a[i-1]+a[i-2];
           a[i]=k;
          
	    }
        for(int i=0;i<10;i++)
        {
            cout<<a[i]<<" ";
        }
	    
}