#include <bits/stdc++.h>
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
        string s;
        cin>>s;
        ll dash=0,under=0;
        for(char c:s){
            if(c=='-') dash++;
            else under++;
        }
        if(dash<2 || under==0){
            cout<<0<<endl;
            continue;
        }
        ll left =dash/2;
        ll right =dash-left;
        ll answer = under* left*right;

        cout<<answer<<endl;


    }

    return 0;
}