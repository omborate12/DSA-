#include <iostream>
using namespace std;

 int findSum(int arr[][3],int r,int c)
 {
    int sum[3] ={0,0,0};
    for(int i=0;i<r;i++)
      {
        for(int j=0;j<c;j++)
        {
            sum[i]+=arr[i][j];
        }
      }
      for(int i=0;i<r;i++)
      {
        cout<<sum[i]<<" "<<endl;
      }

 }
int main()
{
    int arr[3][3];

    for (int i =0;i<3;i++)
    {
        for (int  j= 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    findSum(arr,3,3);


   return 0;
}