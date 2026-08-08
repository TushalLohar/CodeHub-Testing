#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        int i = 1;
        while (true) {
            if (i % 3 != 0 && i % 10 != 3) {
                cnt++;
                if (cnt == n) {
                    cout << i << endl;
                    break;
                }
            }
            i++;
        }
    }
    return 0;
}