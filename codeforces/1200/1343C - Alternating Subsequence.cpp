#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        long long ans = 0;
        long long current_max = a[0];
 
        for (int i = 1; i < n; i++) {
            if ((a[i] > 0 && current_max > 0) || 
                (a[i] < 0 && current_max < 0)) {
                
                current_max = max(current_max, a[i]);
            } 
            else {
                ans += current_max;
                current_max = a[i];
            }
        }
 
        ans += current_max;
 
        cout << ans << "\n";
    }
 
    return 0;
}