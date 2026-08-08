class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> hash(n + 1, 0);
        // for (int i = 0; i < n; i++) {
        //     hash[nums[i]] = 1;
        // }
        // for (int i = 0; i < hash.size(); i++) {
        //     if (hash[i] == 0) {
        //         cout << i;
        //         return i;
        //     }
        // }
        // return -1;

        int n = nums.size();
        int s1 = n * (n + 1) / 2;
        int s2 = 0;
        for (int i = 0; i < n; i++) {
            s2 = s2 + nums[i];
        }

        return s1 - s2;
    }
};