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

        ll n, m;
        cin >> n >> m;

        bool ans = false;
        if (m < n)
        {
            cout << m << " " << (m + 1) << endl;
            ans = true;
        }
        if (!ans && m <= n && m >= 2)
        {
            cout << (m - 1) << " " << m << endl;
            ans = true;
        }
        if (!ans)
        {
            ll p = 4;
            for (int i = 2; i <= 31 && !ans; i++)
            {
                ll coeffienct = p - 2;

                ll gap_min = max(1LL, (m - n + coeffienct - 1) / coeffienct);

                ll gap_max = (m - 1) / (p - 1);

                if (gap_min <= gap_max)
                {
                    ll d = gap_min;
                    ll x = m - d * (p - 1);
                    ll y = x + d;
                    if (x >= 1 && y <= n && x < y)
                    {
                        cout << x << " " << y << endl;
                        ans = true;
                    }
                }
                p *= 2;
            }
        }

        if (!ans)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}