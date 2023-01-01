#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
  int findTarget(int arr[3][3],int target)
  {
   for(int i = 0; i <3;i++)
   {
    for(int j=0;j<3;j++)
    {
        if(arr[i][j]==target)
        {   
            
            return 1;

        }
    }
   }
   return 0;
  }
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
   
   if(findTarget(arr,100))
      cout<<"yes"<<endl;
   else
      cout<<"no"<<endl;
 
 
 
return 0;
}