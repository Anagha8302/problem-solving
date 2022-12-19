/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Union of two arrays

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
        set<int>s;
        for(int i=0;i<n;i++)
        s.emplace(a[i]);
        for(int i=0;i<m;i++)
        s.emplace(b[i]);
        return s.size();
    }
};