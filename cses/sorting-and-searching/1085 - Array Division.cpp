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

bool check(ll target , vector<ll>& nums,int n ,int k){
    ll current_sum=0;
    ll partition=1;
    for(int i=0;i<n;i++){
      
        if(current_sum+nums[i]>target){
            current_sum=0;
            partition++;
        }
          current_sum+=nums[i];

    }
    return partition<=k;

}

void solve()
{
    int n, k;
    cin >> n >> k;
    ll total = 0;
    ll low = 0;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        low = max(low, nums[i]);
        total += nums[i];
    }

    ll high =total;
    ll ans=-1;

    while(low<=high){
        ll mid= (low+high)/2;
        if(check(mid,nums,n,k)){
            ans =mid;
            high =mid-1;
        }
        else{
            low =mid+1;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}