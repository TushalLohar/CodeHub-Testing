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

        vector<int> nums(7);

        int sum=0; int maxi = INT_MIN;
        for(int i=0;i<7;i++){
            cin>>nums[i];
            sum+=nums[i];
            maxi=max(maxi,nums[i]);
        }

        cout<<(-sum+2*maxi)<<endl;

      



    }

    return 0;
}