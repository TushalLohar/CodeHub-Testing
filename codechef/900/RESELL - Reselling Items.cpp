#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector < int > nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        sort(nums.rbegin(), nums.rend());

        int answer = 0;
        for (int i = 0; i < k; i++) {
            if (nums[i] > 5)
                answer += (nums[i] - 5);
        }

        for (int i = k; i < n; i++) {
            if (nums[i] > 10)
                answer += (nums[i] - 10);
        }

        cout << answer << endl;
    }

    return 0;
}