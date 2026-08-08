#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        long long jump = 0;
        long long gain = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            long long a, b, c;
            cin >> a >> b >> c;

            
            jump += a * (b - 1);

            gain = max(gain, a * b - c);
        }

        if (jump >= x) {
            cout << 0 << '\n';
        } else if (gain <= 0) {
            cout << -1 << '\n';
        } else {
            long long remaining = x - jump;
            long long rollback = (remaining + gain - 1) / gain;
            cout << rollback << '\n';
        }
    }
    return 0;
}
