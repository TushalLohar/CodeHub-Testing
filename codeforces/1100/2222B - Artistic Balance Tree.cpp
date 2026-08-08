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
        int n ,m;
        cin>>n>>m;

        vector<ll> nums(n);
        for(auto &x:nums) cin>>x;

        vector<ll> arr(m);
        for(auto &x: arr){
            cin>>x;
            x--;
        }

        vector<ll> group[2];
        ll total =0;

        for(int i=0;i<n;i++){
            total+=nums[i];
            group[i%2].pb(nums[i]);
        }

        sort(group[0].rbegin(), group[0].rend());
        sort(group[1].rbegin(), group[1].rend());

        int count [2]={0,0};
        for(int i=0;i<m;i++){
            count[arr[i]%2]++;

        }
        ll marked =0;
        for(int i =0;i<2;i++){
            int limit = min(count[i] , (int)group[i].size());

            int j=0;
            while(j<limit && group[i][j]>0){
                marked+=group[i][j];

                j++;
            }

            if(limit >0 && j==0){
                marked+=group[i][0];
            }
        }

        cout<<total-marked<<endl;
        
        
    }

    return 0;
}