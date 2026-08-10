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
        int n,k;
        cin>>n>>k;

        vector<int> nums(n), arr(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        for(int i=0;i<n;i++) cin>>arr[i];

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int maxi = max(nums[i],nums[j]);
                int mini = min(nums[i],nums[j]);

                int discount =min(maxi/2,100);
                int total = mini +(maxi-discount);

                if(total<=k){

                    ans=max(ans,arr[i]+arr[j]);
                }
            }
        }

        cout<<ans<<endl;

        

    }

    return 0;
}