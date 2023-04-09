//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    if(n==0 || n==1)
	     return ;
	     int zeroIndex=-1;
	     for(int j=0;j<n;j++)
	     {
	         if(arr[j]==0)
	           {
	              zeroIndex=j;
	              break;
	           }
	     }
	     if(zeroIndex==-1)
	          return ;
	     for(int i=zeroIndex;i<n;i++)
	     {
	         if(arr[i]!=0 && i>zeroIndex)
	         {
	             int temp=arr[i];
	             arr[i]=arr[zeroIndex];
	             arr[zeroIndex]=temp;
	             for(int j=zeroIndex;j<n;j++)
	             {
	                 if(arr[j]==0)
	                 {
	                    zeroIndex=j;
	                     break;
	                 }
	             }
	         }
	     }
	    
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends