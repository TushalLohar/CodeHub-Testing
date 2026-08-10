#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        // Find all gcd values from N down to 1
        for(int g = n; g >= 1; g--) {
            for(int i = 1; i <= n; i++) {
                if(__gcd(i, n) == g) {
                    cout << i << " ";
                }
            }
        }
        cout << "\n";
    }
}