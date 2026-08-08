class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        vector<int> arr = nums;
        long long ans = 0;
        long long max_left = 0;
        for (int i = k; i < nums.size(); i++) {
            max_left = max(max_left, 1LL * nums[i - k]);
            ans=max(ans,max_left+nums[i]);
            
        }
        return ans;
    }
};