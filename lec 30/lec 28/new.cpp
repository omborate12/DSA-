#include <iostream>
using namespace std;

int update(int &n)
{
    n++;
}
int main()
{
    cout<<"HEllo world"<<endl;
    int n=5;
    cout<<"Before "<<n<<endl;
    update(n);
    cout<<"After "<<n<<endl;
}

