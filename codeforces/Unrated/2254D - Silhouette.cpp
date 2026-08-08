#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define endl '\n'
 
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve()
{
    int n;
    cin >> n;
    vector<pair<ll, int>> k(n);
    for (int i = 0; i < n; i++)
    {
        cin >> k[i].first;
        k[i].second = i;
    }
 
    sort(k.begin(), k.end());
    vector<ll> ans(n);
    ll prev_sum = 0;
    ll last = 0;
 
    for (int i = 0; i < n;)
    {
        int j = i;
 
        while (j < n && k[j].first == k[i].first)
        {
            j++;
        }
 
        ll cnt = j - i;
 
        ll cur;
 
        // Current shadow must equal sum of all previous values
        if (k[i].first != prev_sum)
        {
            cout << -1 << endl;
            return;
        }
 
        if (j == n)
        {
            // Last distinct value
            cur = last + 1;
        }
        else
        {
            ll need = k[j].first - prev_sum;
 
            if (need <= 0 || need % cnt != 0)
            {
                cout << -1 << endl;
                return;
            }
 
            cur = need / cnt;
 
            if (cur <= last)
            {
                cout << -1 << endl;
                return;
            }
        }
 
        for (int x = i; x < j; x++)
        {
            ans[k[x].second] = cur;
        }
 
        prev_sum += cnt * cur;
        last = cur;
 
        i = j;
    }
 
    for (auto x : ans)
    {
        cout << x << " ";
    }
 
    cout << endl;
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