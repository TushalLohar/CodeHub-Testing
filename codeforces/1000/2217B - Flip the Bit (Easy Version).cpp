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

        int n, k;
        cin >> n >> k;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];

        int p;
        cin >> p;
        p--;

        int x = nums[p];

        int left = 0;
        bool in_group = false;
        for (int i = 0; i < p; i++)
        {
            if (nums[i] != x && !in_group)
            {
                left++;
                in_group = true;
            }
            else if (nums[i] == x)
                in_group = false;
        }

        int right = 0;
        in_group = false;
        for (int i = p + 1; i < n; i++)
        {
            if (nums[i] != x && !in_group)
            {
                right++;
                in_group = true;
            }
            else if (nums[i] == x)
                in_group = false;
        }

        cout << 2 * max(left, right) << endl;
    }

    return 0;
}