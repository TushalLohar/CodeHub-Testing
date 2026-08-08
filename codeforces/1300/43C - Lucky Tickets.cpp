#include <bits/stdc++.h>
using namespace std;
 
int digitSumMod3(int x) {
    int sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return sum % 3;
}
 
int main() {
    int n;
    cin >> n;
 
    int c0 = 0, c1 = 0, c2 = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
 
        int r = digitSumMod3(x);
        if (r == 0) c0++;
        else if (r == 1) c1++;
        else c2++;
    }
 
    int ans = (c0 / 2) + min(c1, c2);
    cout << ans << endl;
 
    return 0;
}