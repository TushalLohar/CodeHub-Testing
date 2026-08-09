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

    ll g = 0;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        g = gcd(g, x);
    }

    ll ans = 1;

    for (ll i = 2; i <= g / i; i++) {
        if (g % i == 0) {
            int cnt = 0;

            while (g % i == 0) {
                g /= i;
                cnt++;
            }

            ans *= (cnt + 1);
        }
    }

    if (g > 1)
        ans *= 2;

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}