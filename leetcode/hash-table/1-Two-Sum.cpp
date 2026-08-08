class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //vector <int> ans;
    // for(int i=0; i<nums.size(); i++){
    //     for(int j=i+1; j<nums.size();j++){
    //         if(nums[i]+nums[j]==target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             for(int x: ans){
    //                 cout<<x<<" ";
    //             }
    //             return ans;
    //         }
    //     }
    // }
    // return ans;

    // //better
    // vector <int> ans;
    // unordered_map<int , int> mp;
    // for(int i=0 ; i<nums.size(); i++){
    //     int more = target - nums[i];
    //     if(mp.find(more)!=mp.end()){
    //         ans.push_back(mp[more]);
    //         ans.push_back(i);
    //         for(int x: ans){
    //             cout<<x<<" ";
    //         }
    //         return ans;
    //     }
    //     mp[nums[i]]=i;

    // }
    // return ans;

       vector<pair<int,int>> arr;

        int left = 0;
        int right = nums.size() - 1;

        for (int i = 0; i < nums.size(); i++)
            arr.push_back({nums[i], i});

        sort(arr.begin(), arr.end());

        while (left < right)
        {
            if(arr[left].first + arr[right].first == target) {
                return {arr[left].second, arr[right].second};
            }
            else if (arr[left].first + arr[right].first < target) {
                left++;
            } 
            else {
                right--;
            }
        }

        return {0, 0};
    }
};