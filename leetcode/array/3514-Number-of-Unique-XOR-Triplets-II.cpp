class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int MAXX = 2048;

        vector<bool> dp(MAXX, false);
        dp[0] = true;

        for (int pick = 0; pick < 3; pick++) {
            vector<bool> next(MAXX, false);

            for (int xr = 0; xr < MAXX; xr++) {
                if (!dp[xr]) continue;

                for (int num : nums) {
                    next[xr ^ num] = true;
                }
            }

            dp = next;
        }

        int ans = 0;
        for (bool possible : dp)
            if (possible)
                ans++;

        return ans;
    }
};