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

const int MOD = 998244353;
const ll INF = 1e18;

const int MAXN = 200000;

ll fact[MAXN + 1];

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    ll ways = 1;
    int operations = 0;

    int i = 0;

    while (i < n) {
        int j = i;

        while (j < n && s[j] == s[i])
            j++;

        int len = j - i;

        operations += len - 1;
        ways = (ways * len) % MOD;

        i = j;
    }

    ways = (ways * fact[operations]) % MOD;

    cout << operations << " " << ways << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++)
        fact[i] = (fact[i - 1] * i) % MOD;

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}