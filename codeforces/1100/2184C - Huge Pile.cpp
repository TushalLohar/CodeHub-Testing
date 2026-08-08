#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k > n) {
            cout <<-1<<endl;
            continue;
        }
        if (k == n) {
            cout <<0<<endl;
            continue;
        }

        long long x = 1;  
        bool found = false;

        for (int time = 1; time <= 60; time++) {
            x *= 2;
            if (x > n) break;

          
            long long low = n / x;
            long long high = (n +x - 1) / x;

            if (k >= low && k <= high) {
                cout << time <<endl;
                found = true;
                break;
            }
        }

        if (!found) cout << -1<<endl;
    }

    return 0;
}