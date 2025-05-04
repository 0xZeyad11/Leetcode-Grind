class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0 ; 
        int right = 1 ; 
        int maxP {0} ; 
        while (right < (int)prices.size()){
            if(prices[left] < prices[right]){
                int curr = prices[right] - prices[left] ; 
                maxP = max(curr , maxP) ; 
            }else{
                left  = right ; 
            }
            right++ ; 
        }

        return maxP ; 
    }
};