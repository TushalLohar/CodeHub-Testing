#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        int answer = 0;
        int current_max = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] >= current_max) {
                current_max = nums[i];
                answer++;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}