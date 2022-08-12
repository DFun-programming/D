//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int arr[], int n)
    {
    	
    	for(int i = 0;i < n;i++)
    	{
    	    string n = to_string(arr[i]);
    	    int low = 0, high = n.length()-1;
    	    while(low <= high)
    	    {
    	        if(n[low] != n[high])
    	        {
    	            return false;
    	        }
    	         low++;
    	         high--;
    	    }
    	}
    	return true;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
