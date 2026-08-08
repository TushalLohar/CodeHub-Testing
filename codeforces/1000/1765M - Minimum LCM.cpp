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

        ll n;
        cin>>n;
        ll ans_a=1;
        ll ans_b=n-1;

        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                ans_a=n/i;
                break;
            }
        }


        cout<<ans_a<<" "<<n-ans_a<<endl;

    }

    return 0;
}