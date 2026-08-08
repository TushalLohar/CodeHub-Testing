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
        cin >> n;

        vector<ll> nums_a(n);
        vector<ll> nums_b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums_a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> nums_b[i];
        }

        vector<ll> max_a(2 * n + 1, 0);
        vector<ll> max_b(2 * n + 1, 0);
        ll count = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums_a[i] == nums_a[i - 1])
                count++;
            else
            {
                max_a[nums_a[i - 1]] = max(max_a[nums_a[i - 1]], count);
                count = 1;
            }
        }
        max_a[nums_a[n - 1]] = max(max_a[nums_a[n - 1]], count);
        count = 1;

        for (int i = 1; i < n; i++)
        {
            if (nums_b[i] == nums_b[i - 1])
                count++;
            else
            {
                max_b[nums_b[i - 1]] = max(max_b[nums_b[i - 1]], count);
                count = 1;
            }
        }
        max_b[nums_b[n - 1]] = max(max_b[nums_b[n - 1]], count);


        ll ans =-1;
        for(int i=1;i<=2*n;i++){
            ans=max(ans,max_a[i]+max_b[i]);

        }
        cout<<ans<<endl;
        


    }

    return 0;
}