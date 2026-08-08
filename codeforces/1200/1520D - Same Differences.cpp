#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define endl '\n'
 
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve()
{
    ll n;
    cin >> n;
    vector<long long> arr(n);
    map<long long, long long> mp;
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i] - i]++;
    }
 
    long long ans = 0;
    for (auto it : mp)
    {
        ans += ((it.second) * (it.second - 1)) / 2;
    }
 
    cout << ans << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}