#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    if (n == 1)
    {
        cout << 2;
    }
    else
    {
        long long sum = 2;
        for (int i = 2; i <= n; i++)
        {
            sum = sum*2 + 2;
        }
        cout << sum;
    }
}