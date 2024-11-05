class Solution {
public:
    int maxArea(vector<int>& height) {
       int res {0} ;
       int sz = (int)height.size() ;  
       int  r = sz-1 , l = 0 ; 
       while(l < r){
            int mxArea = (r-l)*min(height[l] , height[r]) ; 
            res = max(res, mxArea) ; 

            if(height[r] > height[l]) l++  ; 
            else    r-- ; 
       }

       return res;
    }
};