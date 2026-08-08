#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        long long n = (sqrt(1 + 8 * (x + y)) - 1) / 2;
        long long sum = n * (n + 1) / 2;
        long long l = max(0LL, sum - y);
        long long r = min(sum, x);
        long long a = (x + sum - y) / 2;
        a = max(l, min(r, a));
        vector<bool> v(n + 1);
        for(long long i = n; i >= 1; i--) if(a >= i) v[i] = true, a -= i;
        for(long long i = 1; i <= n; i++) cout << (v[n - i + 1] ? 'X' : 'Y');
        cout << '\n';
    }
}