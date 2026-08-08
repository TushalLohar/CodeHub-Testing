#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

       
        for (char &c : s) c = tolower(c);

        int i = 0;

        // 1. block of 'm'
        if (i < n && s[i] == 'm') {
            while (i < n && s[i] == 'm') i++;
        } else {
            cout << "NO\n";
            continue;
        }

        if (i < n && s[i] == 'e') {
            while (i < n && s[i] == 'e') i++;
        } else {
            cout << "NO\n";
            continue;
        }

      
        if (i < n && s[i] == 'o') {
            while (i < n && s[i] == 'o') i++;
        } else {
            cout << "NO\n";
            continue;
        }

       
        if (i < n && s[i] == 'w') {
            while (i < n && s[i] == 'w') i++;
        } else {
            cout << "NO\n";
            continue;
        }

        if (i == n) cout << "YES\n";
        else cout << "NO\n";
    }
}
