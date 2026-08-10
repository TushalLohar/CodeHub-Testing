#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        long long minSum = N / 2 * (N - 1) / (N % 2 == 0 ? 1 : 1); // simplified
        long long maxSum = 1LL * (N-1)*(N-2)/2;
        cout << N-2 << " " << maxSum << "\n"; // corrected minSum formula
    }
}