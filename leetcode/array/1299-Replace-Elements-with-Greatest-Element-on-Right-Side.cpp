// class Solution {
// public:
//     vector<int> replaceElements(vector<int>& arr) {
//         vector<int> temp;
//         int n = arr.size();

//         for (int i = 0; i < n; i++) {
//             if (i == n - 1)
//                 temp.push_back(-1);
//             else
//                 temp.push_back(*max_element(arr.begin() + i + 1, arr.end()));
//         }
//         return temp;
//     }
// };
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxRight = -1;

        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            int current = arr[i];
            arr[i] = maxRight;            // Replace with current greatest on right
            maxRight = max(maxRight, current); // Update the max for next iteration
        }

        return arr;
    }
};

