#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here 1 1 2 3 5 8 13 21 34
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int> a ;
	    a.push_back(1);
	    a.push_back(1);
	    for(int i=2;i<100;i++)
	    {   
           int k=a[i-1]+a[i-2];
           a[i]=k;
          
	    }
        // for(int i=0;i<10;i++)
        // {
        //     cout<<a[i]<<" ";
        // }

	    
	    
	    string s;
	    cin>>s;
	     long long int count=0;
	    for(int i=0;i<s.length()-1;i++)
	    {
	        if(s[i]!=s[i+1])
	        {
	            count++;
	            
	        }
	    }
	    long long int ans =a[count+1];
	    long long int final =ans%998244353;
	    cout<<final<<endl;
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	   // long long int count1=0,count2=0;
	   // for(int i=0;i<s.length();i++)
	   // {
	   //     if(s[i]=='a')
	   //     {
	   //         if(s[i+1]=='b' && s.length()-1>i)
	   //         {
	   //             count1++;
	   //         }
	   //     }
	   //     else if(s[i]=='b' )
	   //     {
	   //         if(s[i+1]=='a' && s.length()-1>i)
	   //         {
	   //             count2++;
	   //         }
	   //     }
	   // }
	   // if(count1==0 && count2==0)
	   // {
	   //     cout<<"1"<<endl;
	   // }
	   // else
	   // {
	   //     long long int z= count1+count2+1;
	   //    // long long int final=pow(2,z);
	   // long long int ans= z%998244353;
	   // cout<<ans<<endl;
	   ////cout<<(count1+count2)<<endl;
	   // }
	}
	return 0;
}
