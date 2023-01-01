#include<iostream>
using namespace std;

int findPivot(int arr[],int n)
{
    int start=0;
    int end = n-1;
    int mid=(start+end)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start = mid+1;
        }
        else
        {
            end=mid;
        }
        mid=(start+mid)/2;
    }
    return start;
}

int main()
{
    int a[10]={1,2,4,7,9,5,6};
    int ans =findPivot(a,7);
    cout<<ans<<endl;
    return 0;
}