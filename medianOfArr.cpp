/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    
		    sort(v.begin(),v.end());
			int ans ;
			
			if(v.size() & 1)
				ans = v[v.size() / 2];
			else
				ans = (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2;
			return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
