#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];
        
        bool all_same_abs = true;
        long long abs_val = abs(nums[0]);
        for (int i = 1; i < n; i++) {
            if (abs(nums[i]) != abs_val) {
                all_same_abs = false;
                break;
            }
        }
        
        cout << (all_same_abs ? "Yes" : "No") << "\n";
    }
    
    return 0;
}