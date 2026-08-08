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

        string s1, s2;
        cin >> s1 >> s2;

        int i = 0, ans = 0;

        while (i < n)
        {

            if (s1[i] != s2[i])
            {

                bool used = false;

                if (i + 1 < n)
                {
                    int price = 0;

                    if (s1[i] != s1[i + 1])
                        price++;
                    if (s2[i] != s2[i + 1])
                        price++;

                    if (price <= 1)
                    {
                        ans += price;
                        i += 2;
                        used = true;
                    }
                }

                if (!used)
                {
                    ans++;
                    i++;
                }
            }
            else
            {
                i++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}