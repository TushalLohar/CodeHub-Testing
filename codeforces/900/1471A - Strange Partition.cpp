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

        ll n, x;
        cin>>n>>x;
        ll total=0;
        vector<ll>nums(n);

        for(int i=0;i<n;i++){
            cin>>nums[i];
            total+=nums[i];

        }

        ll maxi=0;
        for(int i=0;i<n;i++){
            maxi+=(nums[i]+x-1)/x;
        }

        ll mini =(total+x-1)/x;

        cout<<mini<<" "<<maxi<<endl;

    }

    return 0;
}