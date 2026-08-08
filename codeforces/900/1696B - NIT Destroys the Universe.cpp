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

        ll n;
        cin>>n;
        ll count=0;
        vector<ll> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]==0){
                count++;
            }
        }
        if(count==n){
            cout<<0<<endl;
            continue;
        }
        

        ll left=0 , right =n-1;
        while(nums[left]==0){
            left++;
        }
        while(nums[right]==0){
            right--;
        }
        
        

        bool zero=false;
        for(int i=left;i<=right;i++){
            if(nums[i]==0){
                zero=true;
                break;
            }
        }

        if(zero){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }


    }

    return 0;
}