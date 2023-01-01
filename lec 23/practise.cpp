#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mixedArray(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0, count1 = 0, count2 = 0;
    vector<int> a;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            a.push_back(arr1[i]);
            i++;
            // count1 = i;
        }
        else
        {
            a.push_back(arr2[j]);
            j++;
            // count2 = j;
        }
    }
    if (i < m)
    {
        for ( i ; i < m; i++)
        {
            a.push_back(arr1[i]);
        }
    }
    if (j < n)
    {
        for ( j ;  j < n; j++)
        {
            a.push_back(arr1[i]);
        }
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << a[i]<<" ";
    }
}

int main()
{
    int arr1[10] = {1, 2, 4, 6, 9};
    int arr2[10] = {2, 5, 7, 8};
    mixedArray(arr1, arr2, 5, 4);
    return 0;
}









