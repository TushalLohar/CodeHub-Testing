#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> left_right;
        vector<int> middle;
        vector<int> nums(n);
        for (int i = 0; i < n; i++){
             cin >> nums[i];
        }
        for (int i = 0; i < x; i++){
            left_right.push_back(nums[i]);
        }
        for (int i = y; i < n; i++){
            left_right.push_back(nums[i]);
        }
        for (int i = x; i < y; i++){
            middle.push_back(nums[i]);
        }
    
        if (middle.empty())
        {
            for (int i = 0; i < n; i++)
                cout << left_right[i] << " ";
            cout << "\n";
            continue;
        }

        int m = middle.size();
        int best_start = 0;
        for (int start = 1; start < m; start++)
        {
            bool smaller = false;

            for (int i = 0; i < m; i++)
            {
                int a = middle[(start + i) % m];
                int b = middle[(best_start + i) % m];

                if (a < b)
                {
                    smaller = true;
                    break;
                }
                if (a > b)
                    break;
            }

            if (smaller)
                best_start = start;
        }

        int firstValue = middle[best_start];

        int pos = left_right.size();
        for (int i = 0; i < left_right.size(); i++)
        {
            if (left_right[i] > firstValue)
            {
                pos = i;
                break;
            }
        }
        for (int i = 0; i < pos; i++)
            cout << left_right[i] << " ";

        for (int i = 0; i < m; i++)
            cout << middle[(best_start + i) % m] << " ";

        for (int i = pos; i < left_right.size(); i++)
            cout << left_right[i] << " ";

        cout << "\n";
    }

    return 0;
}