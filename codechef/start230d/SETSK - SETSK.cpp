#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector < int > nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        bool ans = true;
        int last = -1000;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                if (i - last <= k)
                {
                    ans = false;
                    break;
                }
                last = i;
            }
        }
        if (ans)
        {
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                {
                    bool covered = false;
                    for (int j = 0; j < n; j++)
                    {
                        if (nums[j] == 1 && abs(i - j) <= k)
                        {
                            covered = true;
                            break;
                        }
                    }
                    if (!covered)
                    {
                        ans = false;
                        break;
                    }
                }
            }
        }

        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}