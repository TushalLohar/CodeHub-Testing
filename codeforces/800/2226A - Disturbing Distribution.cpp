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
const ll MOD = 676767677;
const ll INF = 1e18;
void solve() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }


    ll sum = 0;
    ll last_non_1 = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] > 1) {
            sum = (sum + nums[i]) % MOD;
            last_non_1 = i;
        }
    }

    if (last_non_1 == -1) {
        cout << 1 << endl;
        return;
    }

  
    for (int i = last_non_1 + 1; i < n; i++) {
        if (nums[i] == 1) {
            sum = (sum + 1) % MOD;
            break;
        }
    }

    cout << sum << endl;
}
int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        solve();

        

    }

    return 0;
}