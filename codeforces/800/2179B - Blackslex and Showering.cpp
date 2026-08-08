#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long total = 0;
        for (int i = 0; i < n - 1; i++) {
            total += llabs(a[i] - a[i + 1]);
        }

        long long ans = total; 

        for (int k = 0; k < n; k++) {
            long long cur = total;

            if (k > 0)
                cur -= llabs(a[k - 1] - a[k]);
            if (k < n - 1)
                cur -= llabs(a[k] - a[k + 1]);
            if (k > 0 && k < n - 1)
                cur += llabs(a[k - 1] - a[k + 1]);

            ans = min(ans, cur);
        }

        cout << ans << endl;
    }

    return 0;
}
