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
        char c;
        cin>>c;
        string s;
        cin>>s;

        s+=s;
        n=n*2;

        ll ans =INT_MIN;
        ll index=-1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='g') index=i;

            if(s[i]==c){
                ans = max(ans, index-i);
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}