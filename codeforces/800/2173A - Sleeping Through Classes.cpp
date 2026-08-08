#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    vector<int> awake(n, 0);
 
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            for (int j = i; j <= min(i + k, n - 1); ++j) {
                awake[j] = 1;
            }
        }
    }
 
    int awake_count = 0;
    for (int i = 0; i < n; ++i) {
        if (awake[i]) {
            awake_count++;
        }
    }
 
    cout << n - awake_count <<"\n";
    
    }
    return 0;
}