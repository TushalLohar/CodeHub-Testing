class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            digits[i]++;

            if (digits[i] == 10) {
                digits[i] = 0;   // carry continues
            } else {
                return digits;   // no carry → done
            }
        }

        // all digits were 9
        vector<int> newDigits(n + 1, 0);
        newDigits[0] = 1;

        return newDigits;
    }
};