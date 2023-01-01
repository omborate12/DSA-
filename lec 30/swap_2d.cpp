#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int arr[3][4]={1,2,3,8,4,5,6,5,7,8,9,5};
   int row = sizeof(arr)/sizeof(arr[0]);
   cout<<row<<endl;
   int col =sizeof(arr[0])/sizeof(arr[0][0]);
   cout<<col<<endl;
//    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
//    for(int i=0 ; i<3 ; i++){
//     for(int j=0 ;   j<i ; j++){
//         swap(arr[i][j], arr[j][i]);
//    }
//    }
//     for(int i=0 ; i<3 ; i++){
//     for(int j=0 ;   j<3 ; j++){
//         cout<<arr[i][j]<<" ";
//    }cout<<endl;
//     }
 
 
 
return 0;
}