#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=123,rev=0,t=3;
    while(num>0)
    {
        rev=rev*10+num%10;
        num=num/10;

    }
    cout<<rev;
}