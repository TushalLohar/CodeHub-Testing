#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int m = n * (n - 1) / 2;
        vector<long long> b(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<long long> a;
        int x = 0;

        for (int i = n - 1; i >= 1; i--) {
            a.push_back(b[x]);
            x += i;
        }

        a.push_back(a.back());

        for (long long x : a) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
