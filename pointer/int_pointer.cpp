#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int n=5;
   
   int* p_x =&n;
   cout<<p_x<<endl;
   cout<<*p_x<<endl;

   int a[5] = {100,1,2,3};
   int *pp =&a[0]+1;
    cout<<*pp<<endl;


 
 
 
return 0;
}