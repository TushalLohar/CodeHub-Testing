class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int diff[52] = {0};
        for(auto &r : ranges){
            diff[r[0]] += 1;
            if(r[1]+1 < 52) diff[r[1]+1] -= 1;
        }
        for(int i=1;i<52;i++){
            diff[i] += diff[i-1];
        }
        for(int i=left;i<=right;i++){
            if(diff[i] <= 0) return false;
        }
        return true;
    }
};