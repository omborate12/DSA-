#include<iostream>
using namespace std;

void rev(int arr[],int n)
{
    int start =0 ,end =n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
void printArr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    




}

int main()
{
    int n ,a[100];
    cout<<"Enter the size of an array";
    cin>>n;
    cout<<"Enter the elements in array";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    

    rev(a,n);

    printArr(a,n);
}