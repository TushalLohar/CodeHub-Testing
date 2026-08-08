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
const ll MOD = 676767677;
const ll INF = 1e18;

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        vector<int> freq(m, 0);
        for (int i = 0; i < n; i++){
            freq[nums[i]]++;
        }


        vector<int> count(m + 1, 0);
        for (int i = 1; i <= m; i++){
            count[i] = count[i - 1] + freq[i - 1];
        }

        ll answer = 1;
        bool valid = true;

        for (int i = 0; i < n && valid; i++)
        {
            int x = nums[i];
            if (x == 0)
                continue;

            bool before = false;
            bool earliest = false;

            if (i > 0)
            {
                if (nums[i - 1] < x){
                    before = true;
                }
                if (nums[i - 1] < x - 1){
                    earliest = true;
                }
            }
            if (i < n - 1)
            {
                if (nums[i + 1] < x){
                    before = true;
                }
                if (nums[i + 1] < x - 1){
                    earliest = true;
                }
            }

            if (!before)
            {
                valid = false;
                break;
            }

            ll options;
            if (earliest){
                options = count[x] - count[x - 1];
            }
            else{
                options = count[x];
            }

            if (options <= 0)
            {
                valid = false;
                break;
            }

            answer = (answer * (options % MOD)) % MOD;
        }

        cout << (valid ? answer : 0LL) << endl;
    }

    return 0;
}