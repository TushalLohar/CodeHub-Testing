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
#define all(x)(x).begin(), (x).end()
#define rall(x)(x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second

// ---------- CONSTANTS ----------
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {
    fast_io;

    // int n,q;
    // cin>>n>>q;

    // vector<ll> nums(n);
    // for(int i=0;i<n;i++){
    //     cin>>nums[i];
    // }
    // sort(all(nums));
    // vector<ll> space;
    // for(int i=0;i<n-1;i++){
    //     space.pb(nums[i+1]-nums[i]);
    // }

    // while(q--){
    //     ll p;
    //     cin>>p;

    //     ll answer=p;
    //     for(auto it :space){
    //         answer+=min(p,it);
    //     }

    //     cout<<answer<<endl;
    // }

    int n, q;
    cin >> n >> q;

    vector < long long > nums(n);
    for (auto & x: nums) cin >> x;

    sort(all(nums));

    vector < long long > space;
    for (int i = 1; i < n; i++) {
        space.push_back(nums[i] - nums[i - 1]);
    }

    sort(all(space));

    int m = space.size();
    vector < long long > pref(m + 1, 0);
    for (int i = 0; i < m; i++) {
        pref[i + 1] = pref[i] + space[i];
    }

    while (q--) {
        long long x;
        cin >> x;

        int index = upper_bound(all(space), x) - space.begin();

        long long ans = x + pref[index] + (m - index) * x;

        cout << ans << '\n';
    }




}