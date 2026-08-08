#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char maxchar = 'a';
        for (char c : s) {
            maxchar = max(maxchar, c);
        }

        int ans = (maxchar - 'a') + 1;
        cout << ans << endl;
    }
    return 0;
}
