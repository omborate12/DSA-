#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 class car{
    public:
    string name;
    int price;
    car(string s,int n){
        name = s;
        price = n;
    }

 };
int main()
{
   car obj1("BMW",500);

   cout<<obj1.name<<" "<<obj1.price<<endl;
 
 
 
return 0;
}