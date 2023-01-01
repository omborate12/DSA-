#include<iostream>
using namespace std;

void tripletSum(int arr[],int n,int s)
{
    int i=0,j=1,k=2 , sum=0;
    while(i<n && j<n && k<n)
    {
        sum +=arr[i]+arr[j]+arr[k]; 
        if(sum==s)
        {
            cout<<i++<<" "<<k++;
            return;

        }
        else if(sum<s)
        {
            i++;
            j++;
            k++;
            sum =0; 
        }
        else if(sum>s)
        {
            i++;
            j++;
            k++;
            sum =0; 
        }
    //     else
    //     {
    //         cout<<"-1";
    //     }
    
    
}
cout<<"-1";

}

int main()
{
    int size,a[100],sum;
  cout<<"Enter the size of array";
  cin>>size;
  cout<<"Enter the elements in array";
  for(int i =0;i<size;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter the sum of elements";
  cin>>sum;
  tripletSum(a,size,sum);
  return 0;
}