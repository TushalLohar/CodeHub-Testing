#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int sum = 0;
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (i >= x) {
                sum = sum + i;
                count++;
            }
        }
        int cost = x * count;
        int profit = sum - cost;
        cout << profit<<endl;

    }
}