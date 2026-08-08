#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Using unordered_set to find distinct elements
    unordered_set<int> distinct;
    for (int i = 0; i < n; i++) {
        distinct.insert(arr[i]);
    }

    int k = distinct.size();
    cout << 2 * k - 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
