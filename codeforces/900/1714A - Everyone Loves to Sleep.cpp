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

    int t;
    cin >> t;
    while (t--) {

        int n, H, M;
    cin >> n >> H >> M;
 
    int sleep = H * 60 + M;
 
    int min_sleep = 24 * 60;
 
    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;
 
        int alarm = h * 60 + m;
 
        int diff = alarm - sleep;
 
        if (diff < 0) 
            diff += 24 * 60;
 
        min_sleep = min(min_sleep, diff);
    }
 
    cout << min_sleep / 60 << " " << min_sleep % 60 << endl;

    }

    return 0;
}