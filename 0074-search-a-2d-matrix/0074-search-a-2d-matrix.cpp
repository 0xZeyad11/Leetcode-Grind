class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool res  = false ; 
       int m = matrix.size() ;
       int up = 0 ; 
       int down = m-1 ; 

       while(up <= down){
        int Vmid = (up + down)/2  ; 
        if(matrix[Vmid][0] > target){
            down = Vmid - 1; 
        }else if(matrix[Vmid][0] < target){
            cout<<"Found in row no "<<Vmid<<'\n' ; 
            res  = binarySearch(matrix[Vmid] , target) ; 
            if(res) return true ; 
            else up = Vmid + 1 ; 
        }
       } 
       return res ; 
    }

    bool binarySearch(const vector<int>& nums , int target){
        int n = nums.size() ; 
        int right = n-1 ;
        int left = 0 ; 
        while(left <= right){
            int mid = left + (right - left)/2 ; // No overflows
            if(nums[mid] > target) right = mid - 1 ; 
            else if(nums[mid] < target) left = mid + 1 ; 
            else return true ; 
        }

        return false ;
    }
};