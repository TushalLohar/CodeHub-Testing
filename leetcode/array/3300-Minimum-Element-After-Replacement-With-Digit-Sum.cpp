class Solution {
public:
    int minElement(vector<int>& nums) {

        int sum =1e9;
      

        for(int i=0;i<nums.size(); i++){
              int digit_sum=0;
            while(nums[i]){
                
                digit_sum+=nums[i]%10;

                nums[i]/=10;
            }
            sum= min(sum,digit_sum);
        }

        return sum;
        
    }
};