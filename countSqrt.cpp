/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
class Solution {
  public:
    int countSquares(int N) {
        // code here
        int ans = 0;
        for(int i = 1; i <= sqrt(N); i++)
        {
            if(i * i < N)
                ans++;
        }
        return ans;
    }
};