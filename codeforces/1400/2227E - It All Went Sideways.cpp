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
          ll gain=0;
           ll base=0;

        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        vector<int> suffix_min(n+1 , INT_MAX);

        for(int i=n-1;i>=0;i--){
            suffix_min[i]= min(nums[i], suffix_min[i+1]);

        }

       

        for(int i=0;i<n-1;i++){
            if(nums[i]>suffix_min[i+1]){
                base+=(nums[i]-suffix_min[i+1]);
            }

        }

        vector<int> prev_smaller(n ,-1);

        for(int i=1;i<n;i++){
            int j=i-1;

            while(j>=0 && nums[j]>= nums[i]){
                j = prev_smaller[j];
            }

            prev_smaller[i]=j;
        }

      
        for(int i=0;i<n;i++){
            if(nums[i]==suffix_min[i]){
                ll x=(i-1)-prev_smaller[i];
                gain= max(gain , x);
            }
        }

        cout<<base+gain<<endl;

        

    }

    return 0;
}