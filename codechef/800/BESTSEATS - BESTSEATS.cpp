#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > nums(n);
        for (int i = 0; i < nums.size(); i++) {
            cin >> nums[i];
        }
        long long min = LLONG_MAX;
        for (int i = 0; i + 1 < n; i++) {
            long long sum = nums[i] + nums[i + 1];
            if (sum < min) {
                min = sum;
            }
        }
        cout << min << endl;




    }

}