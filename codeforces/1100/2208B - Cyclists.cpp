#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k, p, m;
        cin >> n >> k >> p >> m;
        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        int winning_cost = nums[p - 1];
        int first_cost = winning_cost;
        if (p > k) {

            vector<int> temp;

            for (int i = 0; i < p - 1; i++) {
                temp.push_back(nums[i]);
            }

            sort(temp.begin(), temp.end());

            for (int i = 0; i < p - k; i++) {
                first_cost += temp[i];
            }
        }

        if (first_cost > m) {
            cout << 0 << "\n";
            continue;
        }
        int cycleCost = winning_cost;

        if (n > k) {

            vector<int> temp;
            for (int i = 0; i < n; i++) {
                if (i != p - 1) {
                    temp.push_back(nums[i]);
                }
            }

            sort(temp.begin(), temp.end());
            for (int i = 0; i < n - k; i++) {
                cycleCost += temp[i];
            }
        }

        int remaining = m - first_cost;
        int answer = 1 + (remaining / cycleCost);

        cout << answer << "\n";
    }

    return 0;
}