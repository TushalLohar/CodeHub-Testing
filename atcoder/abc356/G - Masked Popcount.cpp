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
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

#define mod (ll)(998244353)

int main()
{
    fast_io;

    ll n, m;
    cin >> n >> m;
    ll ans = 0;

    for (int i = 0; i < 60; i++)
    {
        if (m & (1ll << i))
        {
            ll temp = n;
            temp >>= (i + 1);

            temp *= (1ll << i);

            temp%=mod;
            if (n & (1ll << i))
            {
                temp += ((n % (1ll << i)) + 1);
                temp%=mod;
            }
             ans += temp;
             ans%=mod;
        }

    }
    cout << ans << endl;

    return 0;
}