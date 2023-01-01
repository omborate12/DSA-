#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 int fact(int x)
 {
    long long int m=1000000007,ans=1;
    for (int i = 1; i <= x; i++)
    {
        ans=((ans) * (i) ) %m;
    }
    return ans;
    
 }
int main()
{
    int num;
   cout<<"Enter any number";
    cin>>num;
    int ans=fact(num);
    cout<<"Factorial of given number is "<<ans<<endl;
  
 
 
return 0;
}