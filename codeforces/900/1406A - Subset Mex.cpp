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
 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    vector<int> freq(101, 0);
    for (int x : arr)
    {
        freq[x]++;
    }
 
    int mexa = 0;
    while (freq[mexa] >= 1)
    {
        mexa++;
    }
 
    int mexb = 0;
    while (freq[mexb] >= 2)
    {
        mexb++;
    }
 
    cout << mexa + mexb << endl;
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