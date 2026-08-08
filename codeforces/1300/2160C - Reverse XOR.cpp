#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string bits(int n) {
    if(n == 0) return "0";
    string ans;
    while(n) {
        ans += (n & 1) ? '1' : '0';
        n >>= 1;
    }
    reverse(ans.begin(), ans.end()); // MSB → LSB
    return ans;
}

bool check(string s) {
    int len = s.size();
    for(int i = 0; i < len / 2; ++i) {
        if(s[i] != s[len - 1 - i]) return false;
    }
    if(len % 2 == 1 && s[len / 2] == '1') return false; // middle bit must be 0
    return true;
}

void solve() {
    int n;
    cin >> n;
    string s = bits(n);

    for(int i = 0; i <= 35; ++i) {
        string temp = string(i, '0') + s; // prepend zeros
        if(check(temp)) {
            cout << "yes\n";
            return;
        }
    }
    cout << "no\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}
