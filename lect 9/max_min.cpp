#include<iostream>
using namespace std;


int getMax(int a[],int n)
{
int maxi =  INT8_MIN;
    
    for(int i=0 ;i<n ;i++)
    {
        // if(a[i]>max)
        // {
        //     max=a[i];
        // }
        maxi =max(maxi,a[i]);
    }   
    return maxi;
    // cout<<max;
}

int main()
{
    int size ,i;
    int arr[100];
    cout<<"Enter the size of array";
    cin>>size;
    cout<<"Enter the elements in array";
    for(i=0;i<size;i++)
    {
       cin>>arr[i];
    }

//    int c = getMax(arr,size);
//    cout<<c<<endl;
 getMax(arr,size);
}

