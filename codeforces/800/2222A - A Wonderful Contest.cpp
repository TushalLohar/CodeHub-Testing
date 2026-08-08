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

        int n;
        cin>>n;
        vector<int> nums(n);
        bool answer=false;
        for(int i=0;i<n;i++){
            cin>>nums[i];

            if(nums[i]==100){
                answer=true;
            }
        }

        if(answer){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }


    }

    return 0;
}