#include <bits/stdc++.h>
#include <iostream>
#include<map>
using namespace std;

// ---------- FAST IO ----------
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

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

int main()
{
    fast_io;
    ll n;
    cin >> n;

    vector<ll> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    map<ll,ll> mp;
    mp[0]=1;
    ll prefix=0;
    for(int i=0;i<n;i++){
        prefix+=nums[i];
        mp[(prefix%n +n)%n]++;


    }
    ll answer=0;
    for(auto it :mp){
        answer+=(it.ss *(it.ss-1))/2;
    }

    cout<<answer<<endl;

    return 0;
}