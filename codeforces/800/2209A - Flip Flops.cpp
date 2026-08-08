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

        long long n,c,k;
        cin>>n>>c>>k;
        vector<long long> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
           if(nums[i]<=c){
            long long kill=min(k ,c-nums[i]);
            k-=kill;
            c+=nums[i]+kill;
           }
           else{
            break;
           }
        }

        cout<<c<<endl;


    }

    return 0;
}