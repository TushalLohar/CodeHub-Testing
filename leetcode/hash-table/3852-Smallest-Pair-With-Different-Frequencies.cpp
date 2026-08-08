class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums){
        unordered_map<int,int>freq;
        for (int i:nums){
            freq[i]++;
        }
        vector<int>unique;
        for (auto &p:freq){
            unique.push_back(p.first);
        }
        sort(unique.begin(),unique.end());
        for (int i = 0; i < unique.size(); i++){
            for (int j = i + 1; j < unique.size(); j++){
                int x = unique[i];
                int y = unique[j];
                if (freq[x] != freq[y]){
                    return {x, y};
                }
            }
        }
        return {-1, -1};
    }
};