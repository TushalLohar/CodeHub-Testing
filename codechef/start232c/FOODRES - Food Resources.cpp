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

    int n , m;
    cin>>n>>m;
    vector<int> nums(n);
    int max_a=0;

    for(int i=0;i<n;i++){
        cin>>nums[i];
        max_a=max(max_a,nums[i]);
    }

    vector<int> freq(max_a+1,0);
    for(int x: nums){
        freq[x]++;
    }
    for(int i=max_a;i>=1;i--){
        ll people=0;
        for(int j=i;j<=max_a;j++){
            if(freq[j]){
                people+=1LL * freq[j] * (j/i);
            }
        }

        if(people>=m){
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<0<<endl;

    

    

    return 0;
}