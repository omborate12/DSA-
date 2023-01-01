#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define sum(arr) accumulate(arr.begin(), arr.end(),0)
 
int main()
{
    vector<int> arr={0,1,2,3};
   cout<<count(arr.begin(), arr.end(),1)<<endl;
//    cout<<accumulate(arr.begin(), arr.end(),0)<<endl;
        arr.erase(  arr);
cout<<sum(arr)<<endl;

//    for(int i=0; i<arr.size(); i++)
//    {
//     cout<<arr[i]<<" ";
//    }
 
 int n1=10,n2=7;
 cout<<max(n1,n2)<<" ";
 
return 0;
}