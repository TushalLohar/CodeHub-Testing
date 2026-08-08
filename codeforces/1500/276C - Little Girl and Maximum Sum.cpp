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

    ll n,q;
    cin>>n>>q;
    vector<ll> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    vector<ll> freq(n,0);
    while(q--){
        ll l ,r;
        cin>>l>>r;
        l-- ,r--;
        freq[l]++;
        if(r+1<n) freq[r+1]--;

    }
    for(int i=1;i<n;i++){
        freq[i]+=freq[i-1];
    }

    sort(all(freq));
    sort(all(nums));

    ll answer=0;
    for(int i=0;i<n;i++){
        answer+=1ll*nums[i]*freq[i];
        
    }
    cout<<answer<<endl;

    return 0;
}