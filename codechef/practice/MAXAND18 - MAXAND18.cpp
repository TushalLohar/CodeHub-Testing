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
        ll n, k;
        cin>>n>>k;

        vector<ll> nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];

        vector<pair<ll,ll>> contribution(31);
        for(int i=0;i<=30;i++){
            ll cnt =0;
            for(int j=0;j<n;j++){
                if(nums[j] &(1<<i)){
                    cnt++;
                }
            }
            contribution[i]= {(cnt*(1<<i)),i*-1}; //along with contribution storing index also

        }

        sort(rall(contribution));
        ll ans=0;
        for(int i=0;i<k;i++){
            int bit_to_set= abs(contribution[i].ss);
            ans=(ans | 1<<bit_to_set);
        }

        cout<<ans<<endl;

        

        

    }

    return 0;
}