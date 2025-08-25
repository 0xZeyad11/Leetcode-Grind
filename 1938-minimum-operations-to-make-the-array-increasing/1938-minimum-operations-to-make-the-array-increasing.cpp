class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i = 0, j = 1;
        int min_op = 0;
        int n = nums.size();
        while (i < n - 1) {
            /*
            1 2 1
            i = 1  , j =  2 
            min_op = 

            1 2 3
            min_op = 3 
            */
            if (nums[i] > nums[j]) {
                min_op += nums[i] - nums[j] + 1;
                nums[j] = nums[i] + 1;
            } else if (nums[i] == nums[j]) {
                nums[j] = nums[i] + 1;
                min_op++;
            }
            i++;
            j++;
        }
        return min_op;
    }
};