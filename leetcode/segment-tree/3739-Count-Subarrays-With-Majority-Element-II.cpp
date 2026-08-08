class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int sum = 0;
        int cnt = 0;
        long long ans = 0;

        for (int num : nums) {
            if (num == target) {
                cnt += mp[sum];
                sum++;
            } else {
                sum--;
                cnt -= mp[sum];
            }

            ans += cnt;
            mp[sum]++;
        }

        return ans;
    }
};