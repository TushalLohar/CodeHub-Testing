class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        int n= nums.size();
        int carry =0;

        for(int i= n-1 ; i>=0;i--){
            nums[i]= nums[i]+ k%10;
            if(carry>0){
                nums[i]+=carry;
                carry=0;
            }
            k/=10;
            if(nums[i]>9){
                carry = nums[i]/10;
                nums[i]=nums[i]%10;
                

            }
            
        }
        while(carry>0 || k>0){
            int sum = k%10 + carry;

            nums.insert(nums.begin(), sum%10);
            carry = sum/10;
            k/=10;
        }

        
        return nums;

        
    }
};