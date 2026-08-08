#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    while (n > 0) {
        if (n % 2 == 0 || n == 2) {
            cout << s[i] << s[i+1];
            i += 2;
            n -= 2;
        } else {
            cout << s[i] << s[i+1] << s[i+2];
            i += 3;
            n -= 3;
        }
        if (n > 0) cout << "-";
    }
    cout << endl;
    return 0;
}