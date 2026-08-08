class Solution {
public:
    string smallestNumber(string num, long long t) {
        long long check = t;
        for (int digit = 2; digit <= 9; digit++) {
            while (check % digit == 0)
                check /= digit;
        }
        if (check > 1)
            return "-1";

        int n = num.size();
        vector<long long> remaining(n + 1);
        remaining[0] = t;
        int start = n - 1;

        for (int i = 0; i < n; i++) {
            if (num[i] == '0') {
                start = i;
                break;
            }

            remaining[i + 1] =
                remaining[i] / gcd(remaining[i], (long long)(num[i] - '0'));
        }
        if (remaining[n] == 1)
            return num;
        for (int i = start; i >= 0; i--) {

            while (++num[i] <= '9') {

                long long need =
                    remaining[i] / gcd(remaining[i], (long long)(num[i] - '0'));

                int digit = 9;
                for (int j = n - 1; j > i; j--) {

                    while (need % digit != 0)
                        digit--;

                    need /= digit;
                    num[j] = char('0' + digit);
                }

                if (need == 1)
                    return num;
            }
        }
        string ans;

        for (int digit = 9; digit >= 2; digit--) {

            while (t % digit == 0) {
                ans.push_back(char('0' + digit));
                t /= digit;
            }
        }

        while (ans.size() < n + 1)
            ans.push_back('1');

        reverse(ans.begin(), ans.end());

        return ans;
    }
};