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

        int n;
        cin >> n;
 
        vector<pair<ll,int>> arr;
 
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            arr.pb({x, i});
        }
 
        sort(all(arr));
        for(int i = 1; i < n; i++){
            arr[i].first += arr[i-1].first;
        }
 
        vector<int> reach(n);
        reach[n-1] = n-1;
 
        for(int i = n-2; i >= 0; i--){
            long long curr = arr[i].first;
            long long next_val = arr[i+1].first - arr[i].first;
 
            if(curr >= next_val){
                reach[i] = reach[i+1]; 
            } else {
                reach[i] = i;
            }
        }
 
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            ans[arr[i].second] = reach[i];
        }
 
        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }

    return 0;
}