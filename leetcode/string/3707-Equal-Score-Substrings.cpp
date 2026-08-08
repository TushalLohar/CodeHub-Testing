class Solution {
public:
    bool scoreBalance(string s) {
        int n = s.size();
        int total = 0;

        // Step 1: Calculate total score of the string
        for (char c : s)
            total += c - 'a' + 1;

        // Step 2: Check for split where left == right
        int left_sum = 0;
        for (int i = 0; i < n - 1; i++) { // split before last char
            left_sum += s[i] - 'a' + 1;
            int right_sum = total - left_sum;
            if (left_sum == right_sum)
                return true;
        }

        // Step 3: No valid split found
        return false;
    }
};
