#include<iostream>
using namespace std;


int main()
{
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    // cout<<"Length of string is"<<name.length();
    int count=0;
    for(int i=0;i<20;i++)
    {   
        cout<<name[i]<<" ";
        count++;
        if(name[i]=='\0')
        break;
    }
    cout<<count-1<<endl;
}