#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 int print(int  n)
 {
    if(n==0 ) return 1;

    print(n-1);
    cout<<" "<<n<<" "; 
    
     }
int main()
{
   int n =10;
   print(n);
 
 
 
return 0;
}