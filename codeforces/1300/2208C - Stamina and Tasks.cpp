#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;

        vector<int> nums_c(n), nums_p(n);

        for (int i = 0; i < n; i++)
            cin >> nums_c[i] >> nums_p[i];

        double answer = 0;
        for (int i = n - 1; i >= 0; i--) {
            int task=nums_c[i];
        
            double taking = task + (1 - nums_p[i] / 100.0) * answer;
            answer = max(answer, taking);
        }
        cout << fixed << setprecision(10) << answer << "\n";
    }
}