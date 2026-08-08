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
        ll a , b;
        cin>>a>>b;

        if(b>a) swap(a,b);

        if(a==b){
            cout<<0<<" "<<0<<endl;
        }
        else{
            ll gcd= a-b;
            ll answer=min(b%gcd,gcd-b %gcd);

            cout<<gcd<<" "<<answer<<endl;
        }



        

    }

    return 0;
}