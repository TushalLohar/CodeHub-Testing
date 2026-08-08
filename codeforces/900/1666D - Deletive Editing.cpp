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

    int n;
    cin >> n;
    while (n--) {

        string s , t;
        cin>>s>>t;

        vector<int> freq_of_t(26,0);
        for(int i=0;i<t.size();i++){
            freq_of_t[t[i]-'A']++;
        }

        for(int i=s.size()-1;i>=0;i--){
            if(freq_of_t[s[i]-'A']>0){
                freq_of_t[s[i]-'A']--;
            }
            else{
                s[i]='.';
            }
        }

        string final ="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='.'){
                final+=s[i];
            }
        }

        if(final==t){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }

    return 0;
}