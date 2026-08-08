class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
         int maxSum = 0, currMax = 0;
    int minSum = 0, currMin = 0;

    for(int num : nums){
        // Maximum sum
        currMax += num;
        if(currMax < 0) currMax = 0;
        maxSum = max(maxSum, currMax);

        // Minimum sum
        currMin += num;
        if(currMin > 0) currMin = 0;
        minSum = min(minSum, currMin);
    }

    return max(maxSum, abs(minSum));
    }
};