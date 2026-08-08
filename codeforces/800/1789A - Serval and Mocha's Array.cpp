#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (gcd(a[i], a[j]) <= 2)
                {
                    flag = 1;
                }
            }
        }

        if (flag == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
