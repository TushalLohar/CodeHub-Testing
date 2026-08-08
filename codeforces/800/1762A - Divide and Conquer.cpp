#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
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

        int n;
        cin >> n;
        ll sum = 0;
        vector<ll> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            sum += nums[i];
        }

        if (sum % 2 == 0)
        {
            cout << 0 << endl;
            continue;
        }

        ll ans = 1e9;

        for (int x : nums)
        {
            int cur = x;
            int operations = 0;

            if (cur % 2 != 0)
            {
                while (cur % 2 != 0)
                {
                    cur /= 2;
                    operations++;
                }
            }
            else
            {
                while (cur % 2 == 0)
                {
                    cur /= 2;
                    operations++;
                }
            }

            ans = min(ans, (ll)operations);
        }

        cout << ans << endl;
    }

    return 0;
}