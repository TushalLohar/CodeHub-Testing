#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, q;
    cin >> n >> q;

    vector<long long> nums(n + 1);
    vector<long long> pref(n + 1);
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];
        pref[i] = pref[i - 1] + nums[i];
    }

    while (q--)
    {
        long long a, b;
        cin >> a >> b;
        long long x = pref[b];
        x = pref[b] - pref[a - 1];

        cout << x << endl;
    }
}
int main()
{
    solve();
    return 0;
}