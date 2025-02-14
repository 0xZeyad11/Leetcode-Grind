class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        // unordered_map<int,int> intersections ;
        // set<int>st1 (nums1.begin() , nums1.end()) ;
        // set<int>st2 (nums2.begin() , nums2.end()) ;

        // for(auto i : st1){
        //     intersections[i]++ ;
        // }
        // for(auto i : st2){
        //     intersections[i]++ ;
        // }

        // for(auto i:intersections){
        //     if(i.second >=2)res.push_back(i.first) ;
        // }

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        while (i < n1 && j < n2) {
            if (nums1[i] == nums2[j]) {
                if (res.empty() || res.back() != nums1[i]) {
                    res.push_back(nums1[i]);
                }
                i++;
                j++;
            } else if (nums1[i] < nums2[j])
                i++;
            else
                ++j;
        }
        return res;
    }
};
