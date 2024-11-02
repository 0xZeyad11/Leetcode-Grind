class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> answer ;
        unordered_map <int , int> mp ; 
        for(auto i : nums){
            mp[i]++ ; 
        }

        vector<pair<int,int>> arr ; 
        for(auto i : mp){
            arr.push_back({i.second , i.first}) ; 
        }
        sort(arr.rbegin()  , arr.rend()) ; 

        for(int i = 0 ; i < k ; ++i){
            answer.push_back(arr[i].second) ; 
        }
        return answer; 
    }
};