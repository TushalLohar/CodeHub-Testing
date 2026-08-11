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
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0;
    int r = n - 1;
    int ans = 0;
    while (l < r && k > 0) {
        ll mn = min(a[l], a[r]);
        if (2LL * mn <= k) {
            a[l] -= mn;
            a[r] -= mn;
            k -= 2LL * mn;

            if (a[l] == 0) {
                l++;
                ans++;
            }
            if (a[r] == 0) {
                r--;
                ans++;
            }
        }
        else {
            if (k % 2 == 1) {
                ll leftAttacks = k / 2 + 1;

                if (a[l] <= leftAttacks)
                    ans++;
            }
            break;
        }
    }
    if (l == r && k >= a[l])
        ans++;

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