#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// ---------- FAST IO ----------
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

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
const ll MOD = 998244353;
const ll INF = 1e18;

ll count(ll l, ll r, ll remaining)
{
    if (l > r)
        return 0;

    ll first = l + ((remaining - l % 4 + 4) % 4);

    if (first > r)
        return 0;

    ll last = r - ((r % 4 - remaining + 4) % 4);
    return (last - first) / 4 + 1;
}

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {

        ll n, x;
        cin >> n >> x;

        ll a_0 = count(0, x - 1, 3) + (x >= 1 ? 1 : 0);
        ll b_0 = count(x, n, 3);

        ll a_1 = count(0, x - 1, 1);
        ll b_1 = count(x, n, 1);

        ll ans = ((a_0 % MOD) * (b_0 % MOD) + (a_1 % MOD) * (b_1 % MOD)) % MOD;

        cout << ans << endl;
    }

    return 0;
}