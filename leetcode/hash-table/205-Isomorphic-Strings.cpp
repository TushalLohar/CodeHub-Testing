class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> s_t(256, -1);  // store mapping from s to t
        vector<int> t_s(256, -1);  // store mapping from t to s

        for (int i = 0; i < s.size(); i++) {
            int a = s[i];
            int b = t[i];

            if (s_t[a] == -1 && t_s[b] == -1) {
                s_t[a] = b;
                t_s[b] = a;
            } else if (s_t[a] != b || t_s[b] != a) {
                return false;
            }
        }

        return true;
    }
};