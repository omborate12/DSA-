#include<iostream>
#include<algorithm>
using namespace std;

// int countUnique(int arr[],int n);
// {
//     sort(arr,arr+n);
// }


int main()
{   int count=0;
    int a[10]={1,2,9,4,5,3,5,4};  
    sort(a,a+8);
    for(int i=0;i<8;i++)
    {
        while (i < 8 && a[i]==a[i+1])
        {
            i++;
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}