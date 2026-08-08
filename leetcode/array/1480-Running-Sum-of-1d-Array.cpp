class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> ans(nums.size());
        // for(int i=0; i<nums.size(); i++){
        //     sum=sum+nums[i];
        //     ans[i]=sum;


        // }
        ans[0]=nums[0];
        int i=1;
        while(i<nums.size()){
        ans[i]=ans[i-1]+nums[i];
        i++;
        }
        return ans;
    }
};