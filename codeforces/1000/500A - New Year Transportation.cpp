#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, t;
    cin >> n >> t;

    vector<int> nums(n + 1);
    for (int i = 1; i < n; i++) {
        cin >> nums[i];
    }

    int pos = 1;

    while (pos < t) {
        pos = pos + nums[pos];
    }

    if (pos == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}