#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        int ans;
        if (b == a) {
            ans = 1;
        } else if (n <= a / b) { 
            ans = 1;
        } else {
            ans = 2;
        }

        cout << ans <<endl;
    }

    return 0;
}
