#include<iostream>
using namespace std;
int add(int arr[],int size)
{
    int sum=0 ;
    for (int  i = 0; i < size; i++)
    {
        sum +=arr[i];
    }
    return sum;
}

int main()
{
    int n,a[100];
    cout<<"Enter the size of array";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
   int c = add(a,n);
   cout<<c<<endl;
}

