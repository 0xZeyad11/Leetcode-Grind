class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0 ; 
        int end = nums.size()-1 ; 
        if(end == 0){
            if(nums[0] < target) return 1 ;
            else return 0 ; 
        }
        cout<<"==================target===============\n" ; 
        cout<<target<<'\n' ; 
        while(start < end){
            cout<<"current start: "<<start<<'\t'<<"current end: "<<end<<'\n' ; 
            if(nums[start]< target && nums[start+1]>target) return start+1 ;
            else if (nums[start] == target) return start  ; 
            else if (nums[end] == target) return end ; 
            else if (target > nums[end]) return end+1 ;
            else if (nums[start]< target) start++ ; 
            else end-- ; 
        }
        return 0 ; 
    }
};