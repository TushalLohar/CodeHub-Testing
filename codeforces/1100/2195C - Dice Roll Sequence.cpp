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

        int count = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1] || nums[i] + nums[i-1] == 7) {
                count++;
        
                for (int x = 1; x <= 6; x++) {
                    if (x == nums[i-1] || x + nums[i-1] == 7) continue;
                    if (i + 1 < n && (x == nums[i+1] || x + nums[i+1] == 7)) continue;
                    nums[i] = x;
                    break;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}