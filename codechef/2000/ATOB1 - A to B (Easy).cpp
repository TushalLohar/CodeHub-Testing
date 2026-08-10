#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }
        bool a_is_uniform = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                a_is_uniform = false;
                break;
            }
        }
        bool b_uniform = true;
        for (int i = 1; i < n; i++) {
            if (b[i] != b[0]) {
                b_uniform = false;
                break;
            }
        }

        if (!a_is_uniform && !b_uniform) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }

    return 0;
}