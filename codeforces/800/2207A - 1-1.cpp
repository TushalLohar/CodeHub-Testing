#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string expand = s;
        bool change = true;
        while (change)
        {
            change = false;
            for (int i = 1; i < n - 1; i++)
            {
                if (expand[i] == '0' && expand[i - 1] == '1' && expand[i + 1] == '1')
                {
                    expand[i] = '1';
                    change = true;
                }
            }
        }
        int ones = count(expand.begin(), expand.end(), '1');

        string final = expand;
        change = true;
        while (change)
        {
            change = false;
            for (int i = 1; i < n - 1; i++)
            {
                if (final[i] == '1' && final[i - 1] == '1' && final[i + 1] == '1')
                {
                    final[i] = '0';
                    change = true;
                }
            }
        }
        int min_ones = count(final.begin(), final.end(), '1');

        cout << min_ones << " " << ones << "\n";
    }
    return 0;
}