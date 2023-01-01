#include <iostream>
using namespace std;

bool checkIntersection(int a1[],int m, int a2[],int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; i < n; j++)
        {
            if(a1[i]==a2[j])
            {
                return true;
            }
        }
        
    }
    return false;
}

int main()
{
    int size1,size2;
    int arr1[100],arr2[100];
    cout<<"Enter the size of array 1";
    cin>>size1;
    cout<<"Enter the size of array 2";
    cin>>size2;
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<size2;i++)
    {
        cin>>arr2[i];
    }
    bool check = checkIntersection(arr1,size1,arr2,size2);
    
    cout<<boolalpha<<check<<endl;
    return 0;

}