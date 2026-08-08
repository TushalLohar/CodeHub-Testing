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

        ll n,p;
        cin>>n>>p;
        vector<ll> people(n);
        for(int i=0;i<n;i++){
            cin>>people[i];
        }

        vector<ll> cost(n);
        for(int i=0;i<n;i++) cin>>cost[i];

        vector<pair<ll,ll>> nums(n);
        for(int i=0;i<n;i++){
            nums[i]={cost[i],people[i]};
        }

        sort(nums.begin(),nums.end());

        ll mini_cost =p;
        ll already_shared=1;

        for(auto it:nums){
            ll can_be_shared=it.second;
            ll sharing_cost=it.first;

            if(sharing_cost>=p){
                break;
            }

            if(already_shared+can_be_shared >n){
                mini_cost+=(n-already_shared)*sharing_cost;
                already_shared=n;
                break;
            }
            else{
                mini_cost+=can_be_shared*sharing_cost;
                already_shared+=can_be_shared;
            }
        }
        mini_cost+=(n-already_shared)*p;
        
        cout<<mini_cost<<endl;


    }

    return 0;
}