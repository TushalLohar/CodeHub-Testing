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

        ll n, k;
		cin >> n >> k; 
		vector<ll> a(n);
		for (ll i = 0; i < n; i++) 
			cin >> a[i];

		ll ans = INT_MAX;
		ll even_count = 0; 
		for (ll i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0)
				even_count++; 
			if (a[i] % k == 0)
				ans = 0; 
			ans = min(ans, (k - a[i] % k)); 
		}
		if (k == 4)
		{
			if (even_count >= 2)
				ans = min(ans, 0LL);
			else if (even_count == 1)
				ans = min(ans, 1LL); 
			else if (even_count == 0)
				ans = min(ans, 2LL);
		}
		cout << ans << endl; 

    }

    return 0;
}