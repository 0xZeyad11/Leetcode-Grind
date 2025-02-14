class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res ; 
        unordered_map<int,int> intersections ; 
        set<int>st1 (nums1.begin() , nums1.end()) ; 
        set<int>st2 (nums2.begin() , nums2.end()) ; 

        for(auto i : st1){
            intersections[i]++ ; 
        }
        for(auto i : st2){
            intersections[i]++ ; 
        }

        for(auto i:intersections){
            if(i.second >=2)res.push_back(i.first) ; 
        }

        return res ;
    }
};
