class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minElement = *min_element(nums.begin(), nums.end());
        int maxElement = *max_element(nums.begin(), nums.end());

        unordered_set<int> present(nums.begin(), nums.end());
        vector<int> missing;
        for (int num = minElement + 1; num < maxElement; num++) {
            if (present.find(num) == present.end()) {
                missing.push_back(num);
            }
        }

        return missing;
    }
};