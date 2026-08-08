class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int, int> mpp;
        // for (int i = 0; i < nums.size(); i++) {
        //     mpp[nums[i]]++;
        // }
        // for (auto x : mpp) {
        //     if (x.second > nums.size() / 2) {
        //         return x.first;
        //     }
        // }
        // return -1;

        int count = 0;
        int element;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                count = 1;
                element = nums[i];
            } else if (nums[i] == element) {
                count++;

            } else {
                count--;
            }
        }
        return element;
        // int count1 = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] == element)
        //         count1++;
        // }
        // if (count1 > nums.size() / 2){
        //     return element;
        // }
           
        return -1;
    }
    

};