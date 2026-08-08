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

        ll n;
        cin >> n;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        // Find two largest values of c[i] = b[i] - a[i]
        ll top1 = LLONG_MIN, top2 = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            ll c = b[i] - a[i];
            if (c >= top1) { top2 = top1; top1 = c; }
            else if (c > top2) top2 = c;
        }

        cout << (top1 + top2 <= 0 ? "YES" : "NO") << endl;



        
    
    }

    return 0;
}