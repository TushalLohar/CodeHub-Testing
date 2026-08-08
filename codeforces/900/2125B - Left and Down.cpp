#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b)
    {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, k;
        cin >> a >> b >> k;

        long long g = gcd(a, b);

        if (a / g <= k && b / g <= k)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}