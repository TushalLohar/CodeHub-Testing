#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (s.find("2026") != string::npos ||
            s.find("2025") == string::npos) {
            cout << 0 << '\n';
        } else {
            cout << 1 << '\n';
        }
    }
    return 0;
}
