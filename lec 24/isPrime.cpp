#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int isPrime(int n)
{
    if (n   == 1) return false;
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0) return false;
    }
    return  true;
}

int main()
{
    int num;
   cout<<"Enter any number"<<endl;
   cin>>num;
 
   cout<<isPrime(num);
 
return 0;
}