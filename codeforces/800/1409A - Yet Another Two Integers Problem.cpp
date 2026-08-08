#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long ans;
        long long a, b;
        cin >> a >> b;

        long long difference = abs(a-b);
        
        ans = (difference+9)/10;

        cout << ans<<endl;
    }
}