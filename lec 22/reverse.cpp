#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
string reverString(char name[],int n)
{    
    int s=0,e=n-1;

    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
    return name;
}




int main()
{
    char name[20];
    cin>>name;
    cout<<name<<endl;
    cout<<"Legth:"<<getLength(name)<<endl;
    int n = getLength(name);
    cout<<"Reverse of given string is "<<reverString(name,n)<<endl;
}