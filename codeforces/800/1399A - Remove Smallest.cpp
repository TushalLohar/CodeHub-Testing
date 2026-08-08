#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];
 
        sort(nums.begin(), nums.end());
 
        bool ans = true;
        for (int i = 0; i + 1 < n; i++) {
            if (nums[i + 1] - nums[i] > 1) {
                ans = false;
                break;
            }
        }
 
        cout << (ans ? "YES\n" : "NO\n");
    }
}