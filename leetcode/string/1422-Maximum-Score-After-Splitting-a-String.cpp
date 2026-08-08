class Solution {
public:
    int maxScore(string s) {
        int rightOnes = 0;

        for (char ch : s) {
            if (ch == '1')
                rightOnes++;
        }

        int leftZeros = 0;
        int maxScore = 0;

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0')
                leftZeros++;
            else
                rightOnes--;

            maxScore = max(maxScore, leftZeros + rightOnes);
        }

        return maxScore;
    }
};