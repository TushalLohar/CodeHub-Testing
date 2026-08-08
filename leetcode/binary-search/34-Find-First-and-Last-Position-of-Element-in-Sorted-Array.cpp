class Solution {
public:
    // int first(vector<int>& nums, int target) {
    //     int low = 0;
    //     int high = nums.size() - 1;
    //     int ans = -1;

    //     while (low <= high) {
    //         int mid = (low + high) / 2;

    //         if (nums[mid] == target) {
    //             ans = mid;
    //             high = mid - 1;
    //         } else if (nums[mid] < target) {
    //             low = mid + 1;
    //         } else {
    //             high = mid - 1;
    //         }
    //     }
    //     return ans;
    // }

    // int last(vector<int>& nums, int target) {
    //     int low = 0;
    //     int high = nums.size() - 1;
    //     int ans = -1;
    //     while (low <= high) {
    //         int mid = (low + high) / 2;

    //         if (nums[mid] == target) {
    //             ans = mid;
    //             low = mid + 1;
    //         } else if (nums[mid] < target) {
    //             low = mid + 1;
    //         } else {
    //             high = mid - 1;
    //         }
    //     }
    //     return ans;
    // }

    // vector<int> searchRange(vector<int>& nums, int target) {
    //     int first_occurance = first(nums, target);

    //     if (first_occurance == -1) {
    //         return {-1,-1};
    //     }

    //     int last_occurance = last(nums, target);

    //     return {first_occurance, last_occurance};

    vector<int> searchRange(vector<int>& nums, int target) {

        int first =
            lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        if (first == nums.size() || nums[first] != target) {
            return {-1, -1};
        }

        int last =
            upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;

        return {first, last};
    }
};