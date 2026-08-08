#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <vector>
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

        bool answer = true;

        set<int> a_elements;
        set<int> used_b;

        vector<int> nums_a(n + 1), nums_b(n + 1);

        for (int i = 1; i <= n; ++i)
        {
            cin >> nums_a[i];
        }

        for (int i = 1; i <= n; ++i)
        {
            cin >> nums_b[i];
        }

        for (int i = 1; i <= n; ++i)
        {
            bool is_free = false;

            if (((i - 1) % k) >= (n - k))
            {
                is_free = true;
            }

            if (!is_free)
            {
                if (nums_b[i] != -1)
                {
                    if (nums_b[i] != nums_a[i])
                    {
                        answer = false;
                    }
                }
            }
            else
            {
                a_elements.insert(nums_a[i]);

                if (nums_b[i] != -1)
                {
                    if (used_b.find(nums_b[i]) != used_b.end())
                    {
                        answer = false;
                    }
                    else
                    {
                        used_b.insert(nums_b[i]);
                    }
                }
            }
        }

        if (answer)
        {
            for (auto x : used_b)
            {
                if (a_elements.find(x) == a_elements.end())
                {
                    answer = false;
                    break;
                }
            }
        }

        if (answer)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}