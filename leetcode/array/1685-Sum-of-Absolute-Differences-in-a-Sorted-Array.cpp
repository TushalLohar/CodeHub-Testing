auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n =nums.size();

        vector<int> ans(n);
        int total_sum=0;
        for(int i=0;i<n;i++){
            total_sum+=nums[i];
        }

        int left_sum=0;
        int right_sum=0;
        for(int i=0;i<n;i++){
            right_sum= total_sum - left_sum-nums[i];

            long long left_part = 1LL * i*nums[i]- left_sum;

            long long right_part = right_sum -1LL *(n-1-i) *nums[i];

            ans[i]=left_part+right_part;

            left_sum+=nums[i];
        }
        return ans;

        
    }
};