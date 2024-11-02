class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> array_products  ; 
       int total_product = product(nums) ; 
       for(int i  = 0 ; i  < (int)nums.size() ; ++i){
            if(nums[i] == 0){
                array_products.push_back(productExceptidx(nums , i)) ; 
                continue ; 
            }
            int current_answer = total_product / nums[i] ; 
            array_products.push_back(current_answer) ; 
       } 
       return array_products ;
    }

private: 
    int product(vector<int> &nums){
        int product_result {1} ;
        for(int i = 0 ; i < (int)nums.size() ; ++i){
            product_result *= nums[i]  ; 
        } 
        return product_result ; 
    }
    int productExceptidx(vector<int> &nums , int idx){
        int product {1} ;
        for(int i = 0; i < (int)nums.size() ; ++i){
            if(i == idx) continue ; 
            product *= nums[i] ; 
        }
        return product ;
    }
};