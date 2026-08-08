#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n+1), b(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<long long> max_val(n+2, 0);
   
        max_val[n] = max(a[n], b[n]);
        for (int i = n-1; i >= 1; i--) {
            max_val[i] = max({a[i], b[i], max_val[i+1]});
        }

        vector<long long> prefix(n+1, 0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i-1] + max_val[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << prefix[r] - prefix[l-1] << " ";
        }
        cout << endl;
    }
    return 0;
}