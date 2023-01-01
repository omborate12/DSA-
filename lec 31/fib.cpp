#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fibo(int n)
{
    if(n==0) return ;
    cout<<n<<" ";
    return n + fibo(n-1);

}
 
int main()
{
   int n =5;
   fibo(n);
 
 
 
return 0;
}