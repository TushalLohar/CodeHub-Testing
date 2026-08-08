#include <iostream>
#include<map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        map<int, int> frequency;
        for (int i = 0; i < n * n; i++) {
            int nums;
            cin >> nums;
            frequency[nums]++;
        }
        
        if (n == 1) {
            cout << "NO\n";
            continue;
        }
        int max_Freq = 0;
        for (auto& [color, cnt] : frequency) {
            max_Freq = max(max_Freq, cnt);
        }
        if (max_Freq > n * (n - 1)) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    
    return 0;
}