#include <iostream>
#include <bits/stdc++.h>
// #include "class.cpp"
using namespace std;
class Hero{
    public:
    int health;
    char grade;
};


 
int main()
{
   
 Hero h1;
 h1.health = 70;
 cout<<"Size of Hero is "<<sizeof(h1)<<endl;

 cout<<"Health is "<<h1.health;
 
 
return 0;
}