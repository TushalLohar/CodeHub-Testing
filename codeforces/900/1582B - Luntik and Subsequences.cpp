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
        cin>>n;

        ll count0=0,count1=0;
        
        vector<ll> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]==0) count0++;
            if(nums[i]==1) count1++;
        }
        ll answer=pow(2,count0)*count1;

        cout<<answer<<endl;
        





    }

    return 0;
}