class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> numSet;
        for (auto num : nums1) {
            numSet.insert(num);
        }
        vector<int> ans;
        for (auto num : nums2) {
            if (numSet.find(num) != numSet.end()) {
                ans.push_back(num);
                numSet.erase(num);
            }
        }
        return ans;
    }
};