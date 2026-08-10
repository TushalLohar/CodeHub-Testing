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
        
        
        vector<bool> seen(n + 2, false);
        int total = 0;
        
        for (int i = 0; i < n; i++) {
            int x = a[i];
            
            if (x == 1) {
                seen[1] = true;
                total++;
            } else if (seen[x - 1]) {
                seen[x] = true;
                total++;
            }
        }
        
        cout << total << endl;
    }
    
    return 0;
}