#include <iostream>
#include <vector>
using namespace std;



int main()
{
    vector <int> a(5,1);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    cout<<"size-> "<<a.size()<<endl;
    cout<<"size-> "<<a.capacity()<<endl;

    
  return 0;  
}