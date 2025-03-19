class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() ; 
        unordered_map <int,int> mp ; 
        for(auto & num : nums){
            mp[num]++ ; 
        }
        vector<pair<int,int>> arr (mp.begin() , mp.end()) ;
   
        sort(arr.begin() , arr.end() , [](const auto &a , const auto &b){
            return a.second > b.second; 
        });

        return arr[0].first ;

    }
};