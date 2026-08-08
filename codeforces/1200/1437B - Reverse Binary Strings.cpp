#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int z_c = 0, o_c = 0;
 
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                if (s[i] == '0') z_c++;
                else o_c++;
            }
        }
 
        cout << max(z_c, o_c) << '\n';
    }
}