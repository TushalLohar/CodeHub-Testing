#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        int lessX = 0, equalX = 0, greaterX = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < x) lessX++;
            else if (a[i] == x) equalX++;
            else greaterX++;
        }

        if (lessX > 0 && greaterX > 0 && equalX == 0) {
            cout << "No"<<endl;
        } else {
            cout << "Yes"<<endl;
        }
    }
}