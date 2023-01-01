#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rev(int arr[],int i,int n)
{
    if(i<= n/2) return ;
    swap(arr[i],arr[n-i-1]);
    rev(arr,i+1,n);
}
 
int main()
{
   int arr[10] = {1,2,3,4,5,6,7};
   rev(arr,0,7);
   for(int i=0;i<7;i++)
   {
    cout<<arr[i]<<" ";
   }
 
 
 
return 0;
}