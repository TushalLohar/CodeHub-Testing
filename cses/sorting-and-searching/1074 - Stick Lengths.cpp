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

    ll n;
    cin>>n;
    vector<ll> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    sort(all(nums));

    double median;
    if(n&1){
        median= nums[n/2];

    }
    else{
        median = (nums[n/2 -1]+ nums[n/2])/2;

    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=abs((nums[i]-median));
    }
    cout<<ans<<endl;

   


}