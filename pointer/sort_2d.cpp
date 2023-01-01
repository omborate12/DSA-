#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   vector<vector<int> > a ={{6,7,2,1,0},{4,5,1,34,44},{1,4,9,7,6}};
//    cout<<a.size()<<endl;
int c=a[0].size();
for(int i=0; i<a.size(); i++)
{
    sort(a[i].begin(), a[i].end());
}

for(int i=0; i<a.size();i++)
{
    for(int j=0;j<c;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
 
 
 
return 0;
}