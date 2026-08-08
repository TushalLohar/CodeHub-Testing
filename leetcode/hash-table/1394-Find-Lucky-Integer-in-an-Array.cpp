class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int num : arr) {
            freq[num]++;
        }

        int answer = -1;

        for (auto it : freq) {
            if (it.first == it.second) {
                answer = max(answer, it.first);
            }
        }

        return answer;
    }
};