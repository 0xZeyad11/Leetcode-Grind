class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       vector<int> res ;
       int n = 2 ;
       while(n--){
        for(size_t i = 0 ; i < nums.size() ; ++i){
            res.push_back(nums[i]) ; 
        }
       }
       return res;
    }
};