class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minPrefix =INT_MAX;
        int sum=0;
        for(int i=0; i<nums.size();i++){
            sum+=nums[i];
            minPrefix=min(sum,minPrefix);

        }
        int answer =max(1,1-minPrefix);

        return answer;


        
    }
};