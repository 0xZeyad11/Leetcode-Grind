class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() ; 
        int left = 0  ;
        int right = n-1 ; 
        if (n == 1){
            if(target == nums[0]) return 0 ; 
            return -1; 
        }
        while(left <= right){
            if(nums[left] == target) return left ; 
            
            else if(nums[left] <target) left ++ ; 
            else right -- ; 
        }
        return -1 ;
    }
};