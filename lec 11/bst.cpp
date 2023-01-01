#include<iostream>
using namespace std;

int BstSearch(int arr[],int size,int s)
{
    int start=0, end =size-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
        if(arr[mid]==s)
        {
            return mid;
        }
        else if (s>arr[mid])
        {
            start =mid+1;
        }
        // if (s<arr[mid])
        else
        {
            end =mid-1;

        }
             mid =(start+end)/2;   
    }
    return -1;

}



int main()
{
    int s ,n=10;
   int array[100] ={4,5,6,7,8,10,12,15,20};
//    cout<<"Enter the element do you want to search";
//    cin>>s;
   int index1 = BstSearch(array,10,15);
//    cout<<array[index]<<endl;
   cout<<index1;
   return 0;
}