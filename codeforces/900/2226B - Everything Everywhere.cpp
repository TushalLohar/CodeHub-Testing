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

int gcd(int a , int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a= temp;
    }
    return a;
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll> nums(n);

        for(int i=0;i<n;i++) cin>>nums[i];

        ll answer=0;
        for(int i=0;i+1<n;i++){
            int a= nums[i] , b= nums[i+1];

            if(abs(a-b)==gcd(a,b)){
                answer++;
            }
        }

        cout<<answer<<endl;

        

    }

    return 0;
}