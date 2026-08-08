#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        if (n % 4 != 0) {
            cout << "NO\n";
            continue;
        }
 
        cout << "YES\n";
 
        int m = n / 2;
 
        for (int i = 1; i <= m; i++) {
            cout << 2 * i << " ";
        }
 
        for (int i = 1; i < m; i++) {
            cout << 2 * i - 1 << " ";
        }
 
        cout << 3 * m - 1 << "\n";
    }
 
    return 0;
}