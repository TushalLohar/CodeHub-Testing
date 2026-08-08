#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        vector<int> nums(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            nums[i] = s[i] - '0';
            sum += nums[i];
        }

        if (sum <= 9) {
            cout << 0 <<endl;
            continue;
        }

        int need = sum - 9;

        vector<int> eliminate;

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                eliminate.push_back(nums[i] - 1);
            } else {
                eliminate.push_back(nums[i]);
            }
        }

        sort(eliminate.begin(), eliminate.end(), greater<int>());

        int answer = 0;

        for (int r : eliminate) {
            if (need <= 0) break;
            need -= r;
            answer++;
        }

        cout << answer<<endl;
    }

    return 0;
}