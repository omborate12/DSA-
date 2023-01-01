#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int start=0,end=2;
	    while(start<end)
	    {
	        if(s[start++]!=s[end--])
	        {
	            cout<<"loses"<<endl;
	            break;
	        }
	        else
	              cout<<"wins"<<endl;
	    }
	}
	return 0;
}
