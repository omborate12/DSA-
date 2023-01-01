#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class human{
    public:
     string name;
     int age;
};

class male: public human{
    int salary;
};
 
int main()
{
   male m;
   human h;
   h.age =55;
    cout<<m.age<<endl;
    cout<<"age is "<<h.age<<endl;
 
 
 
return 0;
}