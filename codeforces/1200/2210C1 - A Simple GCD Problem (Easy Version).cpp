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

long long gcd_func(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        vector<ll> nums_a(n);
        for (int i = 0; i < n; i++)
            cin >> nums_a[i];

        vector<ll> nums_b(n);
        for (int i = 0; i < n; i++)
            cin >> nums_b[i];

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ll left = 1, right = 1;

            if (i > 0)
            {
                left = gcd_func(nums_a[i - 1], nums_a[i]);
            }
            if (i < n - 1)
            {
                right = gcd_func(nums_a[i], nums_a[i + 1]);
            }
            ll x = gcd_func(left, right);
            ll lcm = (left * right) / x;

            if (lcm < nums_a[i])
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}