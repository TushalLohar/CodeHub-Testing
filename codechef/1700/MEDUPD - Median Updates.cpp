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
        string s;
        cin >> n >> s;
        vector<int> nums;

        bool alternating = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[(i + 1) % n])
            {
                alternating = false;
                break;
            }
        }

        if (alternating)
        {
            cout << -1 << endl;
            continue;
        }

        ll i = 0;
        while (i < n)
        {
            int count = 0;
            char current = s[i];

            while (i < n && s[i] == current)
            {
                count++;
                i++;
            }

            nums.pb(count);
        }

        if (nums.size() > 1 && s[0] == s[n - 1])
        {
            nums[0] += nums.back();
            nums.pop_back();
        }
        if (nums.size() == 1)
        {
            cout << 1 << endl;
            continue;
        }
        vector<int> temp = nums;
        for (int x : nums) temp.push_back(x);

        ll ans = 1, cur = 0;

        for (int x : temp) {
            if (x == 1) {
                cur++;
                ans = max(ans, (cur + 3) / 2);
            } else {
                cur = 0;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}