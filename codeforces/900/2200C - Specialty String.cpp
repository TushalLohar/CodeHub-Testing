#include<bits/stdc++.h>
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

        string string2 = "";

        for (int i = 0; i < n; i++)
        {
            if (!string2.empty() && string2.back() == s[i])
                string2.pop_back();
            else
                string2.push_back(s[i]);
        }

        if (string2.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}