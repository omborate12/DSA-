#include<iostream>
using namespace std;

void findDuplicate(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(arr[i]==arr[j] && i!=j){
                cout<<arr[i]<<endl;
                return;
            }
        }
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,1,6};
    findDuplicate(arr,7);
    cout<<"Hello";
}