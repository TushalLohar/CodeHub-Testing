#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// ---------- FAST IO ----------
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

// ---------- TYPES ----------
#define endl '\n'
#define ll long long
#define ld long double

// ---------- SHORTCUTS ----------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second

// ---------- CONSTANTS ----------
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        vector<int> value = nums;
        sort(value.begin(), value.end());
        int median = value[n / 2];

        vector<int> sum_1(n + 1, 0), sum_2(n + 1, 0);
        for (int i = 0; i < n; i++) {
            sum_1[i + 1] = sum_1[i] + (nums[i] >= median ? 1 : -1);
            sum_2[i + 1] = sum_2[i] + (nums[i] >  median ? 1 : -1);
        }

        vector<int> reachable;
        reachable.push_back(0);

        vector<int> best(n + 1, -1);
        best[0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int j : reachable) {
                if ((i - j) % 2 == 0) continue;

                if (sum_1[i] > sum_1[j] && sum_2[i] < sum_2[j]) {
                    best[i] = max(best[i], best[j] + 1);
                }
            }
            if (best[i] != -1) {
                reachable.push_back(i);
            }
        }

        cout << best[n] << "\n";

    }

    return 0;
}