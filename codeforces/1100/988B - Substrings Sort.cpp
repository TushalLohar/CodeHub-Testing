#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), [](string a, string b) {
        return a.size() < b.size();
    });
    for(int i = 1; i < n; i++) {
        if(v[i].find(v[i - 1]) == string::npos) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    for(string s : v) {
        cout << s << "\n";
    }
    return 0;
}