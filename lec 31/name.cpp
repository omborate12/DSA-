#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int i,int n)
{
    if(i>n) return ;

    cout<<"OM"<< endl;
    print(i+1,n);

}
 
int main()
{
   int n= 5;
   print(1,n);
 
 
 
return 0;
}