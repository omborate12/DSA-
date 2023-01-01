#include<iostream>
using namespace std;

int firstINdex(int arr[],int n,int k)
{
    int start = 0,end = n-1;
    int ans=-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
    if(arr[mid]==k)
    {
        ans= mid;
        end =mid-1;
    }
    else if(arr[mid]<k)
    {
        end =mid-1;
    }
    else
    {
        start = mid+1;
    }
     mid=(start+end)/2;
    }
    return ans;

}




int main()
{
    int array[]={1,2,2,2,3,3,5};
    int ans =firstINdex(array,7,3);
    cout<<ans;

}