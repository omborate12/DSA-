#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int arr[3][3];
   for(int i = 0; i <3;i++)
   {
    for(int j=0;j<3;j++)
    {
        cin>>arr[i][j];
    }
   }
   int find,ans=0;
   cout<<"Enter the element you want to search ";
   cin>>find;
   int s=0,e=8;
   int mid=(s+e)/2;
   while(s<e)
   {
     int element=arr[mid/3][mid%3];

     if(element==find)
     {
        // cout<<"Found"<<endl;
        ans=1;

     }
     if(element<mid)
     {
        e=mid-1;
     }
     else
     {
        s=mid+1;
     }
     mid=(s+e)/2;
   }
 
 if(ans)
   cout<<"found"<<endl;
 else
   cout<<"not found"<<endl;
 
return 0;
}