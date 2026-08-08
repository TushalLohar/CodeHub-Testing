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

        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s = "";

        for (int i = 0; i < n; i++) {
            string beginning = a[i] + s;
            string end  = s + a[i];
            s = min(beginning, end);
        }

        cout << s << endl;
    }


}
