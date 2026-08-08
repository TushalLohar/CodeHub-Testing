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
       int n, k;
        cin >> n >> k;
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            sum += x;
        }
        
        bool wins = (sum % 2 == 1);
        bool wins_special  = ((n * k) % 2 == 0);
        
        cout << (wins || wins_special ? "YES" : "NO") <<endl;
    }

    return 0;
}