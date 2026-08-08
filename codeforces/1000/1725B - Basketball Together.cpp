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

    

        ll n , d;
        cin>>n>>d;
        vector<ll> nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];

        sort(all(nums));


        ll left =-1;
        ll right =n-1;
        ll ans=0;
        ll team_size=1;
        for(int i=0;i<n;i++){
            if(nums[right]*team_size<=d && left<right){
                left++;
                team_size++;
            }
            else{
                right--;
                ans++;
                team_size=1;
            }

        }

        cout<<ans<<endl;


    }

    