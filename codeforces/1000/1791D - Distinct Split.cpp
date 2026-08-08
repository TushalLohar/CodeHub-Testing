#include <bits/stdc++.h>
#include <iostream>
#include<unordered_set>
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
        string s;
        cin>>s;

        unordered_set<char> st;
        vector<ll> prefix_unique(n+1,0);
        vector<ll> suffix_unique(n+1,0);

        for(int i=0;i<n;i++){
            st.insert(s[i]);
            prefix_unique[i]=st.size();


        }
        st.clear();
        

        for(int i=n-1;i>=0;i--){
            st.insert(s[i]);
            suffix_unique[i]=st.size();
        }

        ll ans=0;
        suffix_unique[n] = 0;
        for(int i=0;i<n;i++){
            ans=max(prefix_unique[i]+suffix_unique[i+1],ans);
        }

        cout<<ans<<endl;





    }

    return 0;
}