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

        ll start , jumps;
        cin>>start>>jumps;
        ll final_pos;
        if(jumps%4==1){
            final_pos=-jumps;
        }
        else if(jumps%4==2){
            final_pos=1;
        }
        else if(jumps%4==3){
            final_pos=jumps+1;

        }
        else if (jumps%4==0)
        {
            final_pos=0;
        }


        if(start%2==0){
            final_pos=start+final_pos;
        }
        else{
            final_pos=start-final_pos;
        }

        cout<<final_pos<<endl;
        

    }

    return 0;
}