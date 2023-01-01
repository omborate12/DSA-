#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 int maxProfit(vector<int> prices) {
            bool val= 1;
        for(int i=0 ;i<prices.size()-1;i++)
        {
            if(prices[i]<=prices[i+1]) val =0;
        }
        vector<int> a;
        for(int i=prices.size()-1;i>0;i--)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(prices[i]>prices[j])
                {
                    int temp = prices[i]-prices[j];
                        a.push_back(temp);
                }
            }
        }

            for(int i=0; i<a.size(); i++)
            {
                cout<<a[i]<<" ";
            }
        // sort(a.begin(),a.end());
        // int last = a.size()-1;
        // int ans = a[last];
        // return ans;
 }
 
int main()
{
   vector<int > a= {0,1,2,3,4,5,6,7};
//    int temp = 10;
//    a.push_back(temp);
//    for(int i=0; i<a.size(); i++)
// {
//     cout<<a[i]<<" ";
// } 
maxProfit(a);
 
 
return 0;
}