#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int arr[3][3];
   int a[3][3];
   for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
        cin>>arr[i][j];

    }
   }
   

//    for (int i = 0; i < 3; i++)
//    {
//     for (int j = 0; j < 3; j++)
//     {
//         cout<<arr[i][j]<<" ";
        
//     }
//     cout<<endl;
//    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
        a[i][j]=arr[j][i];
        
    }
    cout<<endl;
   }


   for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
        cout<<a[i][j]<<" ";
        
    }
    cout<<endl;
   }
    cout<<endl;
    
        for (int i = 0; i <3;i++)
        {
            int s=0,e=2;
            while(s<e)
            {
                for (int j = 0; j<3;j++)
                {  
                    int p=2;
                  swap(a[i][j],a[i][p-j]);
                  s++;
                  e--;
                  p--;
                }
            }
        }
    
 
 
  for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
        cout<<a[i][j]<<" ";
        
    }
    cout<<endl;
   }
return 0;
}