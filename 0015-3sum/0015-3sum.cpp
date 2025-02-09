class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res ;
        sort(nums.begin() , nums.end())  ;
        int n = nums.size() ; 
        for(int i= 0 ; i < (int)nums.size() ; ++i){
            if(i > 0 && nums[i-1] == nums[i]) continue ; 
            int first = nums[i] ; 
            
            int l = i+1  ; 
            int r = n-1 ; 
            while(l < r){
                vector<int>sum;
                int threeSum = first + nums[l] + nums[r] ; 
                if(threeSum == 0){
                    sum.push_back(first) ; 
                    sum.push_back(nums[l]) ; 
                    sum.push_back(nums[r]) ; 
                    res.push_back(sum) ; 
                    l++ ; 
                    while(nums[l] == nums[l-1] && l < r){
                        l++;
                    }
                }
                else if(threeSum > 0){
                   r-- ; 
                }else if (threeSum < 0) l++ ; 

            }
      }
      return res ;
    }
};