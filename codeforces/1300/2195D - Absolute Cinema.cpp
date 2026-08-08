#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> nums(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> nums[i];

        vector<long long> ans(n + 1);

        for (int i = 2; i <= n - 1; i++)
        {
            ans[i] = (nums[i + 1] - 2 * nums[i] + nums[i - 1]) / 2;
        }

        long long sum = 0;
        for (int i = 2; i <= n - 1; i++)
        {
            sum += ans[i] * (i - 1);
        }

        ans[n] = (nums[1] - sum) / (n - 1);

        long long sum_2_to_n = 0;
        for (int i = 2; i <= n; i++)
        {
            sum_2_to_n += ans[i];
        }

        ans[1] = (nums[2] - nums[1]) + sum_2_to_n;

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}