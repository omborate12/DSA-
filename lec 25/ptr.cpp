#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int n=50;
   cout<<n<<endl;
   int *p = 0;
   p =&n;
   cout<<"The value of variable is "<<*p<<endl;
 
 cout<<p;
 
return 0;
}