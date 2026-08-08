#include <bits/stdc++.h>
#include <iostream>
#include<set>
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


int dx[4]={1,-1,-1,1}, dy[4]={1,1,-1,-1};
int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin>>a>>b;
        ll x_king , y_king;
        cin>>x_king>>y_king;
        ll x_queen , y_queen;
        cin>>x_queen>>y_queen;

        set<pair<ll,ll>> king_hits, queen_hits;

        for(int i=0;i<4;i++){
            king_hits.insert({x_king+dx[i]*a,y_king+dy[i]*b});
            king_hits.insert({x_king+dx[i]*b,y_king+dy[i]*a});


            queen_hits.insert({x_queen+dx[i]*a,y_queen+dy[i]*b});
            queen_hits.insert({x_queen+dx[i]*b,y_queen+dy[i]*a});
        }

        int ans=0;

        for(auto position:queen_hits){
            if(king_hits.find(position)!=king_hits.end()){
                ans++;
            }
        }

        cout<<ans<<endl;


        


        

    }

    return 0;
}