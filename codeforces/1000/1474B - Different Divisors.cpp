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
const int MAXN = 200000;

vector<int> primes;

void sieve() {
    vector<bool> is_prime(MAXN, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i < MAXN; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j < MAXN; j += i)
                is_prime[j] = false;
        }
    }
}

int main() {
    fast_io;
       sieve();

    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        int p = *lower_bound(primes.begin(), primes.end(), d + 1);
        int q = *lower_bound(primes.begin(), primes.end(), p + d);

        cout << 1LL * p * q << '\n';


        

    }

    return 0;
}