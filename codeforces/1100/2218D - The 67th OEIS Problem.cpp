 #include <bits/stdc++.h>
#include <iostream>
using namespace std;

// ---------- FAST IO ----------
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

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

vector<ll> primes;
void generate_primes(ll x)
{
    vector<bool> is_prime(x + 1, true);

    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i <=x; i++)
    {
        if (is_prime[i])
        {
            primes.pb(i);
            for (ll j = (ll)i * 2; j <=x; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

int main()
{
    fast_io;

    generate_primes(130000);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2)
        {
            cout << primes[0] << " " << primes[0] <<endl;
            continue;
        }
        cout << primes[0];
        for (int i = 1; i <= n - 2; i++)
        {
            cout << " " << primes[i - 1] * primes[i];
        }
        cout << " " << primes[n - 2] <<endl;
    }

    return 0;
}