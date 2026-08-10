#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <list>
#include <numeric>
#include <iomanip>
#include <climits>
#include <cstring>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

#define pb push_back
#define ff first
#define ss second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    cin >> n;

    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x <= n)
            freq[x]++;
    }

    vector<int> caught(n + 1, 0);

    for (int d = 1; d <= n; d++) {
        if (freq[d] == 0)
            continue;

        for (int pos = d; pos <= n; pos += d) {
            caught[pos] += freq[d];
        }
    }

    int ans = 0;

    for (int pos = 1; pos <= n; pos++) {
        ans = max(ans, caught[pos]);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}