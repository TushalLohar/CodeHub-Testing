#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
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

        vector<ll> second;
        ll smallest = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            ll m;
            cin >> m;

            vector<ll> nums(m);
            for (auto &x : nums)
                cin >> x;

            sort(nums.begin(), nums.end());
            smallest = min(smallest, nums[0]);
            second.pb(nums[1]);
        }

        sort(second.begin(), second.end());
        ll sum = accumulate(second.begin(), second.end(), 0ll); // used 0ll is necesarry ..accumulate takes 3 arguemnets ...if int then write 0

        ll answer = sum + smallest - second[0];

        cout << answer << endl;
    }

    return 0;
}