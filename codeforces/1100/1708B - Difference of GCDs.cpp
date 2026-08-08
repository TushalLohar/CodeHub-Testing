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

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {

        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> ans(n);

        bool ok = true;
        for (ll i = 1; i <= n; i++)
        {
            ll nums_i = ((l + i - 1) / i) * i;

            if (nums_i > r)
            {

                ok = false;
                break;
            }

            ans[i - 1] = nums_i;
        }

        if (!ok)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}