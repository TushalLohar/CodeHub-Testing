#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        unordered_map<int,int> freq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int distinct_ele = freq.size();
        int extra = n - distinct_ele;

        if (extra % 2 == 0)
            cout << distinct_ele << "\n";
        else
            cout << distinct_ele - 1 << "\n";
    }
    return 0;
}
