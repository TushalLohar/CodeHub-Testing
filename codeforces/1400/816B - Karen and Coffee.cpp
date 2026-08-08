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

    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> freq(200000, 0);
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        freq[l]++;

        freq[r + 1]--;
    }

    for (int i = 1; i < 200000; i++)
    {
        freq[i] += freq[i - 1];
    }

    for (int i = 0; i < 200000; i++)
    {
        if (freq[i] >= k)
            freq[i] = 1;
        else
            freq[i] = 0;
    }
    for (int i = 1; i < 200000; i++)
    {
        freq[i] += freq[i - 1];
    }

    ll ans = 0;
    while (q--)
    {
        ll a, b;

        cin >> a >> b;
        a--, b--;
        if (a == 0)
            cout << freq[b] << endl;
        else
            cout << freq[b] - freq[a - 1] << endl;
    }

    return 0;
}