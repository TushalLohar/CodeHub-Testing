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
    ll k, x;
    cin >> k >> x;

    ll up = k * (k + 1) / 2;

    // The whole triangle contains fewer than x emotes.
    if (up + (k - 1) * k / 2 < x) {
        cout << 2 * k - 1 << '\n';
        return;
    }

    // x is reached during the increasing part.
    if (x <= up) {
        ll lo = 1, hi = k;

        while (lo < hi) {
            ll mid = (lo + hi) / 2;

            if (mid * (mid + 1) / 2 >= x)
                hi = mid;
            else
                lo = mid + 1;
        }

        cout << lo << '\n';
        return;
    }

    // We have already sent the first k messages.
    x -= up;

    // Find how many messages are needed in the decreasing part.
    ll lo = 1, hi = k - 1;

    while (lo < hi) {
        ll mid = (lo + hi) / 2;

        // (k-1) + (k-2) + ... + (k-mid)
        ll sum = mid * (2 * k - mid - 1) / 2;

        if (sum >= x)
            hi = mid;
        else
            lo = mid + 1;
    }

    cout << k + lo << '\n';
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