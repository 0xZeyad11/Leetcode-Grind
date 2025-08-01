class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool res = false  ; 
        int bottom = matrix.size() - 1 ,  top = 0 ; 
        int rmid = 0 ; 
        while(top <= bottom){
            // A pointer to the mid row
            rmid = top + (bottom-top)/2  ; 
            if(matrix[rmid][0] == target) return true ; 
            else if(matrix[rmid][0] < target){
                top = rmid +  1; 
                res = bs(matrix[rmid], target) ; 
            }else {
                bottom = rmid - 1 ; 
            }
        }

        return res ;
    }

    bool bs(const vector<int>& matrix,  int target){
        int left = 0 ; int right = matrix.size()-1 ; 
        while(left <= right){
            int mid = left + (right-left)/2 ; 
            if(matrix[mid] == target) return true ;
            else if(matrix[mid] > target){
                right = mid -1 ; 
            }else {
                left = mid + 1; 
            }
        }

        return false; 
    }
};