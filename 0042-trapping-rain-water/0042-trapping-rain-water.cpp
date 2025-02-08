class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size() ; 
        int total_water {0} ; 

        vector<int> right(n) ; 
        vector<int> left(n) ; 

        right[n-1] = height[n-1] ; 
        for(int i = n -2 ; i>= 0 ; --i){
            right[i] = max(right[i+1] , height[i])  ; 
        }

        left[0] =height[0] ; 
        for(int i = 1 ; i< height.size() ; ++i){
            left[i]  = max(left[i-1] , height[i]) ; 
        }

        for(int i = 0 ; i < height.size() ; ++i){
            total_water += min(right[i] , left[i]) - height[i] ; 
        }
        return total_water ;
    }
};