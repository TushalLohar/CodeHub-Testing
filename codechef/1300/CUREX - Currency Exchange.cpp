#include <bits/stdc++.h>
using namespace std;


int main() {
    int T;
    cin >> T;

    while (T--) {
        int A1, B1, A2, B2;
        cin >> A1 >> B1 >> A2 >> B2;

        int initial_value = 5 * A1 + B1;
        int target_value = 5 * A2 + B2;
        int diff = initial_value - target_value;

        if (diff >= 0 && diff % 6 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}