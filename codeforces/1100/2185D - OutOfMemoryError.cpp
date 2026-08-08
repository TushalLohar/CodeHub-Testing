#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> nums(n), answer(n);
        vector<int> last(n, -1);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            answer[i] = nums[i];
        }

        int crash = 0;

        while (m--) {
            int b;
            long long c;
            cin >> b >> c;
            b--;

            if (last[b] < crash) {
                answer[b] = nums[b];
                last[b] = crash;
            }

            answer[b]=answer[b]+c;

            if (answer[b] > h) {
            
                crash++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (last[i] < crash) {
                answer[i] = nums[i];
            }
        }

        for (long long x : answer) {
            cout << x << " ";
        }
        cout <<endl;
    }
}
