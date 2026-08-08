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

void solve(){
    int r,c,x,y;
    cin>>r>>c>>x>>y;
    vector<int>nums(r+c+1);
    while(x--){
        int i;
        cin>>i;
        nums[i]|=1;
    }
    while(y--){
        int i;
        cin>>i;
        nums[i]|=2;
    }
    ll sum=0;
    int take_row=0 ,take_col=0,pick=0,need=r+c-1;
    for(int i=r+c; i>0 && pick<need; i--){
        switch(nums[i]){
        case 0:
            break;
        case 1:
            if(take_row!=r){
                take_row++;
                pick++;
                sum+=i;
            }
            break;
        case 2:
            if(take_col!=c){
                take_col++;
                pick++;
                sum+=i;
            }
            break;
        case 3:
            pick++;
            sum+=i;
            break;
        }
    }
    cout<<sum<<endl;
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