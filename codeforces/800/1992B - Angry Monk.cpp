#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n, k, mx = 0;
        cin >> n >> k;
 
        for(int i = 0; i < k; ++i)
        {
            int x;
            cin >> x;
            mx = max(mx, x);
        }
 
        cout << 2 * (n - mx) - (k - 1) << endl;
    }
}