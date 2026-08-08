class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> freq(101, 0);
        int answer = 0;

        for (int num : nums) {
            answer += freq[num];
            freq[num]++;
        }

        return answer;
    }
};