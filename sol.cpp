class Solution {
public:

    int totalSum(vector<int>&nums){
        int n = nums.size();
        int totalSum = 0;
        for(int i=0; i<n;i++){
            totalSum = totalSum + nums[i];
        }
        return totalSum;
    }

    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftSum = 0;
        int totalSumAns = totalSum(nums);
        // i -> pivot index
        for(int i=0; i<n; i++){
            // rightSum = total of array - pivot element - left side sum
            int rightSum = totalSumAns - nums[i] - leftSum;
            if(leftSum == rightSum){
                return i;
            }
            /* update leftSum: leftSum is addition of elements we have 
            visited before pivot */
            leftSum = leftSum + nums[i];
        }
        return -1;
    }
};
