#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int m = *min_element(a.begin(), a.end());
        int min_diff = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            if (a[i] > m) {
                min_diff = min(min_diff, a[i] - m);
            }
        }
        
        
        cout << max(m, min_diff) << endl;
    }
    
  
}