#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 int seq(int n)
 {
    if(n<1) return 1;
    cout<<n<<" ";
    seq(n-1);

 }
int main()
{
   int n=3;
   seq(n);
 
 
 
return 0;
}