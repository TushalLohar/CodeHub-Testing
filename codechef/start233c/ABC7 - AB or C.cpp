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
        int n;
        cin >> n;

        vector<pair<int, int>> nums;
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            nums.emplace_back(a, i);
            nums.emplace_back(b, i);
            nums.emplace_back(c, i);
        }

        sort(all(nums));
        vector<int> count(n, 0);
        ll covered = 0;
        ll ans = LLONG_MAX;
        int x = 0;
        int total = 3 * n;

        for (int i = 0; i < total; i++)
        {
            int row = nums[i].second;
            count[row]++;
            if (count[row] == 1)
                covered++;

            while (covered == n)
            {
                ans = min(ans, (ll)nums[i].ff - nums[x].ff);
                int x_row = nums[x].ss;
                count[x_row]--;
                if (count[x_row] == 0)
                    covered--;
                x++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}