class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int ,int> mp  ;
        int singlenumber ; 
        for(int i = 0 ; i < (int)nums.size() ; ++i){
            mp[nums[i]]++ ; 
        }
        for (auto pair: mp){
            if(pair.second == 1) return pair.first;
        }

        return 0; 
    }
};