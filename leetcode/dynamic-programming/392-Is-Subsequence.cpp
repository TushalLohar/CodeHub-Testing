class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }

            j++;  // this should always incerment wheter it matches or not
        }
        return i == s.size();
    }
};