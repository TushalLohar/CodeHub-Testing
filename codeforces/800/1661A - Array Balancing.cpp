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
        ll n; cin>>n;
        vector<ll> nums_a(n);
        vector<ll> nums_b(n);
        for(int i=0;i<n;i++) cin>>nums_a[i];
        for(int i=0;i<n;i++) cin>>nums_b[i];

        for(int i=0;i<n;i++){
            if(nums_a[i]>nums_b[i]) swap(nums_a[i],nums_b[i]);
        }

        ll answer=0;
        for(int i=0;i<n-1;i++){
            answer+=abs(nums_a[i]-nums_a[i+1]);
            answer+=abs(nums_b[i]-nums_b[i+1]);
        }

        cout<<answer<<endl;

        

    }

    return 0;
}