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

        ll a,b,c;
        cin>>a>>b>>c;

        bool answer =false;

        ll new_a=2*b-c;
        if(new_a/a>0 && new_a%a==0){
            answer =true;
        }

        ll new_b = (a+c)/2;
        if(new_b/b>0 && new_b%b==0 && (c-a)%2==0){
            answer=true;
        }

        ll new_c= 2*b-a;
        if(new_c/c>0 && new_c%c==0){
            answer=true;
        }

        if(answer) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }

    return 0;
}