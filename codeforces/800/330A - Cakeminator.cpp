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

    int r, c;
    cin >> r >> c;
 
    vector<string> cake(r);
    for (int i = 0; i < r; i++) {
        cin >> cake[i];
    }
 
    int safeRows = 0, safeCols = 0;
 
    for (int i = 0; i < r; i++) {
        bool isSafe = true;
        for (int j = 0; j < c; j++) {
            if (cake[i][j] == 'S') {
                isSafe = false;
                break;
            }
        }
        if (isSafe) safeRows++;
    }
 
    for (int j = 0; j < c; j++) {
        bool isSafe = true;
        for (int i = 0; i < r; i++) {
            if (cake[i][j] == 'S') {
                isSafe = false;
                break;
            }
        }
        if (isSafe) safeCols++;
    }
 
    int result = (safeRows * c) + (safeCols * r) - (safeRows * safeCols);
 
    cout << result << endl;

    return 0;
}