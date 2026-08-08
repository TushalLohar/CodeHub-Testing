#include <bits/stdc++.h>
#include <iostream>
#include<unordered_map>
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
        unordered_map<ll,ll> freq;
        
        vector<ll> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            freq[nums[i]]++;
        }

        ll maxfreq=0;
        for(auto it : freq){
            maxfreq=max(maxfreq,it.ss);
        }

        ll opeartions=0;
        while(maxfreq<n){
            opeartions++;
            if(maxfreq*2<=n){
                opeartions+=maxfreq;
                maxfreq*=2;
            }
            else{
                opeartions+=(n-maxfreq);
                maxfreq=n;
            }
        }

        cout<<opeartions<<endl;




    }

    return 0;
}