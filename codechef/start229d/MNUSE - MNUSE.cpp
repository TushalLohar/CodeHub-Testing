#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long n, k, s, m;
        cin >> n >> k >> s >> m;
        long long answer = k;
        for (long long i = 0; i <= k; i++)
        {
            long long remaining_cakes = k - i;
            long long remaining_sum = s - i * m;

            if (remaining_sum < 0)
                break;
            if (remaining_cakes == 0)
            {
                if (remaining_sum == 0)
                {
                    answer = i;
                    break;
                }
                continue;
            }
            long long p = (m == 1 ? 2 : 1);
            long long q = (m == n ? n - 1 : n);

            if (p > q)
                continue;
            long long low = remaining_cakes * p;
            long long high = remaining_cakes * q;

            if (remaining_sum < low || remaining_sum > high)
                continue;

            bool ok = false;

            if (n == 2)
            {
                if (remaining_sum == remaining_cakes * p)
                    ok = true;
            }
            else if (m == 1 || m == n)
            {
                ok = true;
            }
            else if (n == 3 && m == 2)
            {
                if ((remaining_sum % 2) == (remaining_cakes % 2))
                    ok = true;
            }
            else if (m == 2)
            {
                if (remaining_sum != remaining_cakes + 1)
                    ok = true;
            }
            else if (m == n - 1)
            {
                if (remaining_sum != remaining_cakes * n - 1)
                    ok = true;
            }
            else
            {
                if (remaining_cakes == 1)
                {
                    if (remaining_sum != m)
                        ok = true;
                }
                else
                {
                    ok = true;
                }
            }

            if (ok)
            {
                answer = i;
                break;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}