#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <list>
#include <numeric>
#include <iomanip>
#include <climits>
#include <cstring>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

#define pb push_back
#define ff first
#define ss second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    ll n;
    cin>>n;
    vector<ll> nums(n);
    for(int i=0; i<n;i++){
        cin>>nums[i];
    }
    vector<ll> value;
    vector<ll> count;
    for(int i=0;i<n;){
        int j=i;
        while(j<n && nums[j]==nums[i]){
            j++;
        }
        value.pb(nums[i]);
        count.pb(j-i);

        i=j;
    }
    int box=value.size(), more=0;
    for(int i=0;i+1<box; i++){
        if(count[i]>1 && count[i+1]>1){
            more=2;
            break;
        }
    }
    if(more==0){
        bool ans=false;
        for(int i=0;i<box && !ans; i++){
            if(count[i]<2){
                continue;
            }
            bool good=false;
            if(i>0){
                if(i==1 || value[i-2]!=value[i]){
                    good=true;
                }
            }
            if(!good && i+1<box){
                if(i==box-2 || value[i+2]!=value[i]){
                    good=true;
                }
            }
            if(good){
                ans=true;
            }
        }
        if(!ans){
            for(int i=0;i+2<box;i++){
                if(count[i]>1 && count[i+2]>1 && value[i]!=value[i+2]){
                    ans=true;
                    break;
                }
            }
        }
        if(ans){
            more=1;
        }
    
    }
    cout<<min((ll)n , (ll)box+more)<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}