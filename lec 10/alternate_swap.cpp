#include<iostream>
using namespace std;

int alternateSwap(int arr[],int size)
{ 
    // int newArr[100];
    for(int i = 0;i<size ;i+=2)
    {
       swap(arr[i],arr[i+1]);  
    }
    return arr[100];
}

int print_array(int a[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";;
    }
    
}

int main()
{
    int size ,a[100];
    cout<<"Enter the size of array";
    cin>>size;
    cout<<"Enter the elements in array";
    for(int i=0; i<size;i++)
    {
        cin>>a[i];
    }
     alternateSwap(a,size);
    print_array(a,size);



}
