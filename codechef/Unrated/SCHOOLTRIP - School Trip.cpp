#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;

        int ans = X;  

        int p = (X / K) * K;
        ans = min(ans, X - p);

        int q = p + K;
        if (q <= N) {
            ans = min(ans, q - X);
        }

        cout << ans << endl;
    }

    return 0;
}