#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    deque<int> a ={1,2,4,5,6} ;
    
    int k=2;
    while (k--)
    {
        a.push_front(a[4]);
        a.pop_back();
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}