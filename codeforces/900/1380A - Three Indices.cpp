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

        long long n;
		cin >> n; 
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) 
			cin >> a[i];

		int flag = 0; 
		for (int j = 1; j < n - 1; j++) 
		{
			int i = -1;
			int k = -1; 
			for (int left = 0; left < j; left++) 
			{
				if (a[left] < a[j])
				{
					i = left;
					break;
				}
			}
			for (int right = j + 1; right < n; right++) 
			{
				if (a[right] < a[j])
				{
					k = right;
					break;
				}
			}
			if (i != -1 && k != -1) 
			{
				cout << "YES" << endl;
				cout << i + 1 << " " << j + 1 << " " << k + 1 << endl; 
				flag = 1;
				break;
			}
		}
		if (flag == 0) 
			cout << "NO" << endl;

    }

    return 0;
}