class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;

        int mx = 0;
        for (int x : nums) {
            freq[x]++;
            mx = max(mx, x);
        }
        int ans = 1;
        if (freq.count(1)) {
            ans = max(ans, (freq[1] % 2 == 0) ? freq[1] - 1 : freq[1]);
        }

        for (auto &[start, cnt] : freq) {
            if (start == 1) continue;

            long long cur = start;
            int len = 0;

            while (cur <= mx && freq[cur] >= 2) {
                len += 2;
                if (cur > (long long)sqrt(LLONG_MAX))
                    break;

                cur = cur * cur;
            }

            if (cur <= mx && freq[cur] >= 1)
                len++;
            else
                len--;

            ans = max(ans, len);
        }

        return ans;
    }
};