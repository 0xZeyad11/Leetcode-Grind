class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool res {false} ; 
        
        for(int i = 0 ; i < matrix.size() ; ++i){
            
            res = BinarySearch(matrix[i], target) ;  
            if(res) return true;            
        }
        return false; 
    }
    bool BinarySearch(vector<int>& arr, int target){
        int n = arr.size() ; 
        int low  = 0 ; 
        int high = n-1 ; 
        while(low <= high){
            int mid = low + (high-low)/2 ; 
            if(arr[mid] == target) return true ; 
            else if(arr[mid] < target) low = mid + 1; 
            else high = mid - 1 ; 
        }
        return false ; 
    }
};