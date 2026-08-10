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

        vector<long long> arr1(n), arr2(n);
        for (int i = 0; i < n; i++) cin >> arr1[i];
        for (int i = 0; i < n; i++) cin >> arr2[i];

        bool ok = true;
        long long pref = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            if (arr2[i] < arr1[i]) {
                ok = false;
                break;
            }
            if (arr2[i] > arr1[i] && pref >= arr1[i]) {
                ok = false;
                break;
            }
            pref = max(pref, arr1[i]);
        }

        cout << (ok ? "Yes\n" : "No\n");
    }

    return 0;
}