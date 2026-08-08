class Solution {
public:
    vector<int> validSequence(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();
        vector<int> suffixMatch(m, -1);
        int p = m - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (p >= 0 && word1[i] == word2[p]) {
                suffixMatch[p] = i;
                p--;
            }
        }

        vector<int> answer;

        int j = 0; 
        bool usedChange = false;
        for (int i = 0; i < n && j < m; i++) {
            if (word1[i] == word2[j]) {
                answer.push_back(i);
                j++;
            }
            else if (!usedChange &&
                     (j == m - 1 || i < suffixMatch[j + 1])) {

                usedChange = true;
                answer.push_back(i);
                j++;
            }
        }
        if (j == m)
            return answer;

        return {};
    }
};