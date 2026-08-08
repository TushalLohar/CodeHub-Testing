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

const int given =676767677;


int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        ll x,y;
        cin>>x>>y;

        ll sum =x-y;
        ll abs_s= abs(sum);

       ll func;
       if(sum==0){
        func=1;
       }
       else{
        ll n = abs_s;
        int count=0;

        for(int i=1;(ll)i*i<=n;i++){
            if(n%i ==0){
                count++;
                if(i!=n/i) count++;
            }

        }
        func=count%given;

       }

       cout<<func<<endl;


        if(sum>=0){
            for(int i=0;i<y;i++){
                cout<<-1<<" ";
            }
            for(int i=0;i<x;i++){
                cout<<1<<" ";
            }

        }
        else{
            for(int i=0;i<x;i++){
                cout<<1<<" ";
            }
            for(int i=0;i<y;i++){
                cout<<-1<<" ";
            }
        }

        cout<<endl;


        

    }

    return 0;
}