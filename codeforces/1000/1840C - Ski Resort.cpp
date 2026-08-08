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

        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] > q)
            {
                nums[i] = 0;
            }
            else
                nums[i] = 1;
        }

        ll count1 = 0;
        ll answer = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                count1++;
            }
            else
            {
                if (count1 >= k)
                {
                    ll diff = count1 - k + 1;
                    answer += (diff * (diff + 1)) / 2;
                }
                count1 = 0;
            }
        }
        if (count1 >= k)
        {
            ll diff = count1 - k + 1;
            answer += (diff * (diff + 1)) / 2;
        }

        cout << answer << endl;
    }

    return 0;
}