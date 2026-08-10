#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int one = 0, zero = 0;
        int good = 0;

        for (char c : S) {
            if (c == '1') one++;
            else zero++;

            if (one >= zero)
                good++;
        }

        cout << good << "\n";
    }
    return 0;
}