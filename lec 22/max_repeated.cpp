#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter your string"<<endl;
    cin>>s;
    int count,maxi=0;
    for(int i=0; i<s.length()-1; i++)
    { 
        count=0;
        for(int j=i+1; j<s.length()-1; j++)
        {
            if(s[i]==s[j])
                count++;
             
        }
        if(count>maxi)
             {
                maxi=count;
                
             }
       
    }
    cout<<maxi+1<<endl;
}