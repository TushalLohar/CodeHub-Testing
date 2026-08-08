#include <bits/stdc++.h>
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

    int tc;
    cin >> tc;

    while (tc--) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        int T = 0, M = 0;

        for (char c : s) {
            if (c == 'T') T++;
            else M++;
        }

        if (T != 2 * M) {
            cout << "NO" << endl;
            continue;
        }

        bool ok = true;

        // Left to right check
        int t = 0, m = 0;

        for (char c : s) {
            if (c == 'T') t++;
            else m++;

            if (m > t) {
                ok = false;
                break;
            }
        }

        // Right to left check
        reverse(s.begin(), s.end());

        t = 0;
        m = 0;

        for (char c : s) {
            if (c == 'T') t++;
            else m++;

            if (m > t) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}