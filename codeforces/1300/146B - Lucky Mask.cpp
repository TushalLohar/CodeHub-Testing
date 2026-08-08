#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
    string target = to_string(b);
 
    for (int c = a + 1; ; c++) {
        string s = to_string(c);
        string mask = "";
 
        for (char ch : s) {
            if (ch == '4' || ch == '7') {
                mask += ch;
            }
        }
 
        if (mask == target) {
            cout << c;
            break;
        }
    }
}