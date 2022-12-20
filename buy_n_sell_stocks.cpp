/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Best time to buy and sell stocks
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX; 
        int op = 0; 
        int pist = 0; 
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){ 
                lsf = prices[i]; 
            }
            pist = prices[i] - lsf; 
            if(op < pist){ 
                op = pist;
            }
        }
        return op;
    }
};
