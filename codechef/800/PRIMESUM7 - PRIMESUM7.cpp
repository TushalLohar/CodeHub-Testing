#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            if (x == 1) c1++;
            else if (x == 2) c2++;
            else c3++;
        }
        long long pairs = 1LL * c1 * (c1 - 1) / 2   // (1,1)
                        + 1LL * c1 * c2            // (1,2)
                        + 1LL * c2 * c3;           // (2,3)
        cout << pairs << "\n";
    }
    return 0;
}