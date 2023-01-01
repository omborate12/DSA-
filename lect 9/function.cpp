#include<iostream>
using namespace std;

void show(int a[],int size)
{
    cout<<"Printing of an array"<<endl;
    for(int i=0 ;i<size ;i++)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
    int arr[5]={4};
    show(arr,5);
}