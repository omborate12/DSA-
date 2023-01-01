#include<iostream>

using namespace std;
int main()
{
    int arr[10]={4,5,3,8,9,10};
    int start=0,end = 5;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

}