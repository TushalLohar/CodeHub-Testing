#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == y) cout << z << endl;
        else if (x == z) cout << y << endl;
        else cout << x << endl;
    }
    return 0;
}