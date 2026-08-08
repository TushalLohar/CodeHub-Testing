#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(n + 1, -1);
        vector<bool> used(n + 1, 0);

        nums[n] = 1;
       used[1] = true;

        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= n; j++) {
                if (!used[j] && abs(j - nums[i + 1]) % i == 0) {
                    nums[i] = j;
                    used[j] = true;
                    break;
                }
            }
        }

        for (int i = 1; i <= n; i++)
            cout << nums[i] << " ";
        cout << "\n";
    }
}
