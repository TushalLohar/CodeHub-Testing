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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> nextOne(n, n);

    int nxt = n;

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1')
            nxt = i;

        nextOne[i] = nxt;
    }

    int last = -1;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            last = i;
        }
        else {
            bool leftOK = (last == -1 || i - last > k);
            bool rightOK = (nextOne[i] == n || nextOne[i] - i > k);

            if (leftOK && rightOK) {
                s[i] = '1';
                last = i;
                ans++;
            }
        }
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