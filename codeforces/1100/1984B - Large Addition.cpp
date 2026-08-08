//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// ---------- FAST IO ----------
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

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

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {

         long long n;
        cin >> n;

        bool ok = true;
        int flag = 1;

        while (n >= 10)
        {
            int digit = n % 10;

            if (flag == 1)
            {
                flag = 0;
                if (digit > 8)
                {
                    ok = false;
                    break;
                }
            }
            else if (digit == 0)
            {
                ok = false;
                break;
            }

            n /= 10;
        }

        if (n != 1) ok = false;

        cout << (ok ? "YES" : "NO") << endl;

    }

    return 0;
}