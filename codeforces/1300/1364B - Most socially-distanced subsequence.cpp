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
    vector<int> p(n);

    for (int i = 0; i < n; i++)
        cin >> p[i];

    vector<int> ans;
    ans.push_back(p[0]);
    for (int i = 1; i < n - 1; i++) {
        bool peak = p[i] > p[i - 1] && p[i] > p[i + 1];
        bool valley = p[i] < p[i - 1] && p[i] < p[i + 1];
        
        if (peak || valley)
            ans.push_back(p[i]);
    }
    ans.push_back(p[n - 1]);

    cout << ans.size() << '\n';

    for (int x : ans)
        cout << x << ' ';

    cout << '\n';
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