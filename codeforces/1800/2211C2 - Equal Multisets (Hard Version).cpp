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

        vector<int> nums_a(n), nums_b(n);

        vector<int> frquncy(n + 1, 0);
        vector<int> d_count(n + 1, 0);

        for (int i = 0; i < n; ++i)
            cin >> nums_a[i];
        for (int i = 0; i < n; ++i)
            cin >> nums_b[i];

        bool answer = true;

        for (int i = 0; i < k; ++i)
        {
            frquncy[nums_a[i]]++;
        }
        for (int j = 0; j < k && answer; j++)
        {

            bool is_free = true;
            for (int i = j; i < n; i += k)
            {
                if (nums_a[i] != nums_a[j])
                {
                    is_free = false;
                    break;
                }
            }

            if (!is_free)
            {

                for (int i = j; i < n; i += k)
                {
                    if (nums_b[i] != -1 && nums_b[i] != nums_a[i])
                    {
                        answer = false;
                        break;
                    }
                }
                if (answer)
                {
                    d_count[nums_a[j]]++;
                }
            }
            else
            {
                int fixed = -1;
                for (int i = j; i < n; i += k)
                {
                    if (nums_b[i] != -1)
                    {
                        if (fixed == -1)
                        {
                            fixed = nums_b[i];
                        }
                        else if (fixed != nums_b[i])
                        {
                            answer = false;
                            break;
                        }
                    }
                }

                if (answer && fixed != -1)
                {
                    d_count[fixed]++;
                }
            }
        }
        if (answer)
        {
            for (int v = 1; v <= n; ++v)
            {
                if (d_count[v] > frquncy[v])
                {
                    answer = false;
                    break;
                }
            }
        }

        cout << (answer ? "YES" : "NO") << endl;
    }

    return 0;
}