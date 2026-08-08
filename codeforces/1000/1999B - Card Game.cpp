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

int win(int x1, int x2, int y1, int y2) {
    int s = 0, t = 0;

    if (x1 > y1) s++;
    else if (x1 < y1) t++;

    if (x2 > y2) s++;
    else if (x2 < y2) t++;

    return (s > t);
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int ans = 0;

        ans += win(a1, a2, b1, b2);
        ans += win(a1, a2, b2, b1);
        ans += win(a2, a1, b1, b2);
        ans += win(a2, a1, b2, b1);

        cout << ans << '\n';
       
    }

    return 0;
}