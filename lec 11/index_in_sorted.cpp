#include<iostream>
using namespace std;

int findIndex(int array[],int s)
{
    for (int i = 0; i < 8; i++)
    {
       if(array[i]==s)
       {

            cout<< i<<" ";
            
            if(array[i]!=s)
            {
              cout<<i<<endl;
             }
       } 
    }
    
}
int main()
{
    int arr[100]={1,2,3,4,4,4,4,4,5,6};
    findIndex(arr,4);
    return 0;

}