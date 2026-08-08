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
        string token;
        cin >> token;

        string s;
        int n;

        // Support both common input formats: "s" and "n s".
        if (token.find_first_not_of("01") == string::npos) {
            s = token;
            n = (int)s.size();
        } else {
            n = stoi(token);
            cin >> s;
        }

        int count0=0 , count1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count0++;
            }
            else{
                count1++;
            }
        }

        int removed = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='0' && count1>0){
                count1--;
                removed++;
            }
            else if(s[i]=='1' && count0>0){
                count0--;
                removed++;
            }
            else{
                break;
            }
        }

        cout << n - removed << endl;

    }

    return 0;
}