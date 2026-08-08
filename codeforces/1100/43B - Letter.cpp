#include <bits/stdc++.h>
#include <iostream>
#include<string>
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

    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    unordered_map<char ,int> frequency;
    for(char c: s1){
        if(c!=' '){
            frequency[c]++;
        }
    }

    for(char x: s2){
        if(x ==' ') continue;

        if(frequency[x]>0){
            frequency[x]--;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";




}