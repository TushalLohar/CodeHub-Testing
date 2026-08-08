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

    vector<ll> a(n);
    map<ll, int> freq;

    ll sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        freq[a[i]]++;
    }

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        freq[a[i]]--;

        ll rem = sum - a[i];

        if (rem % 2 == 0) {
            ll need = rem / 2;
            if (freq[need] > 0)
                ans.pb(i + 1);
        }

        freq[a[i]]++;
    }

    cout << ans.size() << '\n';

    for (int x : ans)
        cout << x << " ";

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}